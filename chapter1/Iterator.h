#pragma once

template <typename Item> class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual Item next()    = 0;
    virtual ~Iterator() {
    }
};
