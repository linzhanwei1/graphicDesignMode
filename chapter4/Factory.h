#pragma once

#include <string>

class Product;
class Factory {
public:
    virtual Product *createProduct(const std::string &owner) = 0;
    virtual Product *create(const std::string &owner) {
        auto *pro = createProduct(owner);
        registerProduct(pro);
        return pro;
    }
    virtual void registerProduct(Product *) = 0;
    virtual ~Factory() {
    }
};
