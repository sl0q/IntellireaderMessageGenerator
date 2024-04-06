#include "payload.h"

Payload::Payload()
{
}

Payload::Payload(const std::string& newDebugString, const std::vector<uint8_t>& newData)
{
    this->debugString = newDebugString;
    this->data = newData;
}

Payload::~Payload()
{
}

const std::string& Payload::getDebugString()
{
    return this->debugString;
}

const std::vector<uint8_t>& Payload::getData()
{
    return this->data;
}
