#pragma once

class AbstractDisplay {
public:
    virtual void open()  = 0;
    virtual void close() = 0;
    virtual void print() = 0;
    virtual ~AbstractDisplay(){};

public:
    void display() {
        open();
        print();
        close();
    }
};
