#pragma once

class Print {
public:
    virtual void printStrong() = 0;
    virtual void printWeak()   = 0;
    virtual ~Print() {
    }
};
