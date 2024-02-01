#pragma once

#include "Item.h"
#include <vector>

class Tray : public Item {
public:
    Tray(const std::string &caption)
        : Item(caption) {
    }
    void add(Item *item) {
        m_itemList.push_back(item);
    }
    virtual ~Tray() {
    }

protected:
    std::vector<Item *> m_itemList;
};
