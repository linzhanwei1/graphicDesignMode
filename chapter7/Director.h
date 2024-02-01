#pragma once

#include "Builder.h"

class Director {
public:
    Director(Builder *builder)
        : m_builder(builder) {
    }
    void construct() {
        m_builder->makeTitle("Greeting");
        m_builder->makeString("从早上到下午");
        m_builder->makeItems(std::vector<std::string>{"早上好", "下午好"});
        m_builder->makeString("晚上");
        m_builder->makeItems(std::vector<std::string>{"晚上好", "晚安", "再见"});
        m_builder->close();
    }

private:
    Builder *m_builder;
};
