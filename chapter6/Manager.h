#pragma once

#include "Product.h"
#include <unordered_map>

class Manager {
public:
    void Register(const std::string &name, Product *pro) {
        m_map.insert({name, pro});
    }
    Product *Create(const std::string &name) {
        auto it = m_map.find(name);
        if (it != m_map.end()) {
            return it->second->CreateClone();
        } else {
            return nullptr;
        }
    }

private:
    std::unordered_map<std::string, Product *> m_map;
};
