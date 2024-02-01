#pragma once

#include "DisplayImpl.h"

class Display {
public:
    Display(DisplayImpl *impl)
        : m_pImpl(impl) {
    }
    virtual void open() {
        m_pImpl->rawOpen();
    }
    virtual void print() {
        m_pImpl->rawPrint();
    }
    virtual void close() {
        m_pImpl->rawClose();
    }
    void display() {
        open();
        print();
        close();
    }
    virtual ~Display() {
    }

private:
    DisplayImpl *m_pImpl;
};
