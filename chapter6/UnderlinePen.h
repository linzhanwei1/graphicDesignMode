#pragma once

#include "Product.h"
#include <iostream>

class UnderlinePen : public Product {
public:
    UnderlinePen(const std::string &str)
        : m_name(str) {
    }
    Product *CreateClone() override {
        return new UnderlinePen(m_name);
    }
    void use(const std::string &str) override {
        std::cout << "UnderlinePen " << m_name << " " << str << std::endl;
    }

private:
    std::string m_name;
};
