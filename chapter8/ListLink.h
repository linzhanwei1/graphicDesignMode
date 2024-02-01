#pragma once

#include "Link.h"

class ListLink : public Link {
public:
    using Link::Link;
    std::string makeHTML() override {
        return "<li><a href=\"" + m_url + "\"> " + m_caption + "</a> </li>\n";
    }
};
