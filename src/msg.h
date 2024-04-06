#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

class Msg
{
    private:
        std::string debugString;
        std::vector<uint8_t> data;

    public:
        Msg();
        Msg(const std::string& newDebugString, const std::vector<uint8_t>& newData);
        ~Msg();

        const std::string& getDebugString() const;
        const std::vector<uint8_t>& getData() const ;
        const std::string getDataAsString() const;
};