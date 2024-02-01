#pragma once

#include <iostream>
#include <string>

class Book {
public:
    Book(const std::string &name)
        : m_name(name) {
    }
    const std::string &GetName() {
        return m_name;
    }

private:
    std::string m_name;
};
