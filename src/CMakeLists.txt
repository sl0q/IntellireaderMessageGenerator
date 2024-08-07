cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(wx_cmake_template_core LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# hack for buggy CMake's FindwxWidgets script
if(DEFINED ENV_WX_CONFIG)
    set(ENV{WX_CONFIG} ${ENV_WX_CONFIG})
endif()

set(wxWidgets_USE_STATIC 1)

find_package(wxWidgets REQUIRED)

set(Protobuf_USE_STATIC_LIBS ON)
find_package(Protobuf REQUIRED)

file(GLOB COMMON_SRC CONFIGURE_DEPENDS "../proto_src/common/*.cc")
file(GLOB MISC_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/misc/*.cc")
file(GLOB CONTACT_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/contact/*.cc")
file(GLOB CONTACTLESS_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/contactless/*.cc")
file(GLOB MIFARE_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/mifare/**/*.cc" "../proto_src/intellireader/mifare/**/**/*.cc")
file(GLOB SRV_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/srv/*.cc")
file(GLOB GUI_SRC CONFIGURE_DEPENDS "../proto_src/intellireader/gui/*.cc")

# set(SRCS main.cpp MainFrame.cpp)
set(SRCS App.cpp MainFrame.cpp messageCreator.cpp checksum.cpp payload.cpp msg.cpp
    ../proto_src/intellireader/commands7.pb.cc
    # ../proto_src/intellireader/commands6.pb.cc
    # ../proto_src/intellireader/commands5.pb.cc
    # ../proto_src/intellireader/commands4.pb.cc
    # ../proto_src/intellireader/commands3.pb.cc
#    ../proto_src/intellireader/commands2.pb.cc
    ${COMMON_SRC}
    ${MISC_SRC}
    ${CONTACT_SRC}
    ${CONTACTLESS_SRC}
    ${MIFARE_SRC}
    ${SRV_SRC}
    ${GUI_SRC}
    )

include(${wxWidgets_USE_FILE})

if(APPLE)
    # create bundle on apple compiles
    add_executable(main MACOSX_BUNDLE ${SRCS})

    # Set a custom plist file for the app bundle - needed for Mac OS Retina display
    set_target_properties(main PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else()
    # the WIN32 is needed for Windows in order for it to look for WinMain
    # instead of the main function. This is ignored on other systems,
    # so it works on all platforms
    add_executable(main WIN32 ${SRCS} main.exe.manifest)
endif()

target_include_directories(main PRIVATE ../proto_src ../proto_src/intellireader ../include)

target_link_libraries(main PRIVATE ${wxWidgets_LIBRARIES} ${PROTOBUF_LIBRARY})