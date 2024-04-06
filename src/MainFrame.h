#pragma once

#include <iostream>
#include <string>

#include <wx/wx.h>
#include <wx/wfstream.h>

#include <google/protobuf/message.h>

#include "messageCreator.h"
#include "myExceptions.h"

enum Controls
{
    CONFIG_TC_ID = 2
};

class MainFrame : public wxFrame
{
private:
    wxTextCtrl *inputPathTC;
    wxTextCtrl *outputPathTC;

    void OnClickGenerateButton(wxCommandEvent &evt);

public:
    // MainFrame(const wxString &title, const wxPoint &pos, const wxSize &size);
    MainFrame(const wxString &title);
};
