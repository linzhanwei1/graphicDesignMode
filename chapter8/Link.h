#pragma once

#include "Item.h"

class Link : public Item {
public:
    Link(const std::string &caption, const std::string &url)
        : Item(caption)
        , m_url(url) {
    }
    virtual ~Link() {
    }

protected:
    std::string m_url;
};
