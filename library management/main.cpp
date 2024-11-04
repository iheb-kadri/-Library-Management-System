#include "Library.h"
#include "Book.h"
#include <iostream>

int main() {
    Library library;

    Book book1("Author One", "Title One", 1);
    Book book2("Author Two", "Title Two", 2);

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    return 0;
}