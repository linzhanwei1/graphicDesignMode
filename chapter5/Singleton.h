#pragma once

#include <utility>

template <typename T> class Singleton {
public:
    static T &GetInstance() {
        static T ins;
        return ins;
    }

    Singleton(const Singleton &)            = delete;
    Singleton &operator=(const Singleton &) = delete;
    virtual ~Singleton() {
    }

protected:
    Singleton() {
    }
};
