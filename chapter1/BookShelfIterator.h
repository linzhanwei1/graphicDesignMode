#pragma once

#include "Iterator.h"

template <typename Item> class BookShelf;
template <typename Item> class BookShelfIterator : public Iterator<Item> {
public:
    BookShelfIterator(BookShelf<Item> *bookShelf)
        : m_bookShelf(bookShelf) {
    }
    virtual bool hasNext() override {
        return m_bookShelf->length() > 0 && m_currentIndex < m_bookShelf->length() - 1;
    }
    virtual Item next() override {
        return m_bookShelf->GetBookAt(++m_currentIndex);
    }

private:
    BookShelf<Item> *m_bookShelf;
    int              m_currentIndex = -1;
};
