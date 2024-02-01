#pragma once

#include <string>

class Item {
public:
    Item(const std::string &caption)
        : m_caption(caption) {
    }
    virtual std::string makeHTML() = 0;
    virtual ~Item() {
    }

protected:
    std::string m_caption;
};
