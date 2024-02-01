#pragma once

#include "Banner.h"
#include "Print.h"

class PrintBanner : public Print {
public:
    PrintBanner(const std::string str)
        : m_banner(str) {
    }
    virtual void printStrong() override {
        m_banner.showWithParen();
    }
    virtual void printWeak() override {
        m_banner.showWithAster();
    }

private:
    Banner m_banner;
};
