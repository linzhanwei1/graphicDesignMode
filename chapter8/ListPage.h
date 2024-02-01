#pragma once

#include "Page.h"

class ListPage : public Page {
public:
    using Page::Page;
    std::string makeHTML() override {
        std::string str;

        str.append("<html><head><title>" + m_title + "</head></title>\n");
        str.append("<body>\n");
        str.append("<h1>" + m_title + "</h1>\n");
        str.append("<ul>\n");

        for (auto item : m_itemList) {
            str.append(item->makeHTML());
        }

        str.append("</url>\n");
        str.append("<address>" + m_author + "</address>\n");
        str.append("</body>\n");
        str.append("</html>");

        return str;
    }
};
