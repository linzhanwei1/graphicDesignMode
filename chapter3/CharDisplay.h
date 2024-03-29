#pragma once

#include "AbstractDisplay.h"
#include <iostream>

using std::cout;
using std::endl;

class CharDisplay : public AbstractDisplay {
public:
    CharDisplay(const char *str)
        : m_char(str) {
    }
    void open() override {
        cout << "++++++++++++++++++++" << endl;
    }
    void close() override {
        cout << "++++++++++++++++++++" << endl;
    }
    void print() override {
        cout << m_char << endl;
    }

private:
    const char *m_char;
};
