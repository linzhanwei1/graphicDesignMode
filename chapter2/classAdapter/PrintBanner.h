#pragma once

#include "Banner.h"
#include "Print.h"

class PrintBanner : public Banner, public Print {
public:
    PrintBanner(const std::string &str)
        : Banner(str) {
    }
    virtual void printStrong() override {
        showWithParen();
    }
    virtual void printWeak() override {
        showWithAster();
    }
};
