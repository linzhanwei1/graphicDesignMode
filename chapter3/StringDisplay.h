#pragma once

#include "AbstractDisplay.h"
#include <iostream>
#include <string>

using std::cout;
using std::endl;

class StringDisplay : public AbstractDisplay {
public:
    StringDisplay(const std::string &str)
        : m_str(str) {
    }
    void open() override {
        cout << "--------------------" << endl;
    }
    void close() override {
        cout << "--------------------" << endl;
    }
    void print() override {
        cout << m_str << endl;
    }

private:
    std::string m_str;
};
