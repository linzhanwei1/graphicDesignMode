#pragma once

template <typename Item> class Iterator;

template <typename Item> class Aggregate {
public:
    virtual ~Aggregate() {
    }
    virtual Iterator<Item> *CreateIterator() = 0;
};
