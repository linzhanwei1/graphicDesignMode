#pragma once

#include "Item.h"
#include <iostream>
#include <string>
#include <vector>

class Page {
public:
    Page(const std::string &title, const std::string &author)
        : m_title(title)
        , m_author(author) {
    }
    void addItem(Item *item) {
        m_itemList.push_back(item);
    }
    void output() {
        std::cout << makeHTML() << std::endl;
    }
    virtual std::string makeHTML() = 0;
    virtual ~Page() {
    }

protected:
    std::string         m_title;
    std::string         m_author;
    std::vector<Item *> m_itemList;
};
