#pragma once

#include <string>

class Product {
public:
    virtual Product *CreateClone()               = 0;
    virtual void     use(const std::string &str) = 0;
    virtual ~Product() {
    }
};
