#pragma once

#include "Factory.h"
#include "IDCard.h"
#include <string>
#include <vector>

class IDCardFactory : public Factory {
public:
    Product *createProduct(const std::string &owner) {
        return new IDCard(owner);
    }
    void registerProduct(Product *pro) {
        m_productList.push_back(pro);
    }

private:
    std::vector<Product *> m_productList;
};
