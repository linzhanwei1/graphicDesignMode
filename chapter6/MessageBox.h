#pragma once

#include "Product.h"
#include <iostream>

class MessageBox : public Product {
public:
    MessageBox(const std::string &str)
        : m_name(str) {
    }
    Product *CreateClone() override {
        return new MessageBox(m_name);
    }
    void use(const std::string &str) override {
        std::cout << "Message box " << m_name << " " << str << std::endl;
    }

private:
    std::string m_name;
};
