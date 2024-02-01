#pragma once

#include "Tray.h"
class ListTray : public Tray {
public:
    using Tray::Tray;
    std::string makeHTML() override {
        std::string str;
        str.append("<li>\n");
        str.append(m_caption + "\n");
        str.append("<ul>\n");

        for (auto item : m_itemList) {
            str.append(item->makeHTML());
        }

        str.append("</ul>\n");
        str.append("</li>\n");

        return str;
    }
};
