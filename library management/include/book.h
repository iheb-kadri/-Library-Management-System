#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string author;
    std::string title;
    int bookID;

public:
    Book(const std::string& author, const std::string& title, int bookID);
    std::string getAuthor() const;
    std::string getTitle() const;
    int getBookID() const;
};

#endif
