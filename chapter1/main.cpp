#include "Book.h"
#include "BookShelf.h"
#include "BookShelfIterator.h"
#include <iostream>
#include <string>

using std::cerr;
using std::cout;
using std::endl;
using std::string;

int main() {
    Aggregate<Book> *aggregate = new BookShelf<Book>(0);
    BookShelf<Book> *self      = static_cast<BookShelf<Book> *>(aggregate);
    self->appendBook(Book(string("name1")));
    self->appendBook(Book(string("name2")));
    self->appendBook(Book(string("name3")));
    self->appendBook(Book(string("name4")));
    self->appendBook(Book(string("name5")));
    self->appendBook(Book(string("name6")));

    auto it = aggregate->CreateIterator();
    while (it->hasNext()) {
        Book book = it->next();
        cout << book.GetName() << endl;
    }

    delete aggregate;
    delete it;

    return 0;
}
