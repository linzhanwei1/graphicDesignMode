#pragma once

#include "Aggregate.h"
#include <string>
#include <vector>

template <typename Item> class BookShelfIterator;

template <typename Item> class BookShelf : public Aggregate<Item> {
public:
    BookShelf(int maxSize) {
        m_books.resize(maxSize, std::string(""));
    }
    Iterator<Item> *CreateIterator() override {
        return new BookShelfIterator<Item>(this);
    }
    Item GetBookAt(int index) const {
        return m_books.at(index);
    }
    void appendBook(const Item &book) {
        m_books.emplace_back(book);
    }
    int length() const {
        return static_cast<int>(m_books.size());
    }

private:
    std::vector<Item> m_books;
};
