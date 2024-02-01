#pragma once

#include "Display.h"

class Border : public Display {
public:
    Border(Display *display)
        : m_display(display) {
    }
    virtual ~Border() {
        delete m_display;
    }

protected:
    Display *m_display;
};
