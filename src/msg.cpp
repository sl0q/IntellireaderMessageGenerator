#include "msg.h"

Msg::Msg()
{
}

Msg::Msg(const std::string& newDebugString, const std::vector<uint8_t>& newData)
{
    this->debugString = newDebugString;
    this->data = newData;
}

Msg::~Msg()
{
}

const std::string& Msg::getDebugString() const
{
    return this->debugString;
}

const std::vector<uint8_t>& Msg::getData() const
{
    return this->data;
}

const std::string Msg::getDataAsString() const
{
    char hex[2];
    std::stringstream buf;
    for(auto &e : this->data)
    {
        sprintf(hex, "%X", e);
        buf << "0x" << hex << ' ';
    }
    return buf.str();
}
