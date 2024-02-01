#pragma once

#include "Product.h"
#include <iostream>
#include <string>

class IDCard : public Product {
public:
    IDCard(const std::string &owner)
        : m_owner(owner) {
        std::cout << "make IDCard with owner " << m_owner << std::endl;
    }
    void use() override {
        std::cout << "use IDCard with owner " << m_owner << std::endl;
    }

private:
    std::string m_owner;
};
