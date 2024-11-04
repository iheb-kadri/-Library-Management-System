#include "Library.h"
#include <iostream>

// Constructor
Library::Library() {}

// Methods
void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::displayBooks() const {
    for (const auto& book : books) {
        std::cout << "Book ID: " << book.getBookID() << "\n";
        std::cout << "Title: " << book.getTitle() << "\n";
        std::cout << "Author: " << book.getAuthor() << "\n";
    }
}
