#include "Book.h"

// Constructor
Book::Book(const std::string& author, const std::string& title, int bookID)
    : author(author), title(title), bookID(bookID) {}

// Methods
std::string Book::getAuthor() const {
    return author;
}

std::string Book::getTitle() const {
    return title;
}

int Book::getBookID() const {
    return bookID;
}
