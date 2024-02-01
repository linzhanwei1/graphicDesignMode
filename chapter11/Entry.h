#pragma once

#include <string>

class Entry {
public:
    virtual std::string getName() const = 0;
    virtual int         getSize() const = 0;
    virtual void        addEntry(Entry *entry) {
    }
    virtual void printList(const std::string &str) = 0;
    virtual ~Entry() {
    }

    void printList() {
        printList("");
    }
    std::string toString() const {
        return getName() + " (" + std::to_string(getSize()) + ")";
    }
};
