#ifndef BOOK_H
#define BOOK_H
#include <string>
#include <iostream>

using namespace std;
//final commit
class Book {
    private:
        string title;
        string author;
        int yearPublished;
        bool available;
    public:
        // default constructor
        Book();
        // parameterized constructor
        Book(string title, string author, int yearPublished, bool available = true);
        // getters
        string getTitle() const;
        string getAuthor() const;
        int getYearPublished() const;
        bool isAvailable() const;
        // methods to borrow and return books
        void borrowBook();
        void returnBook();

};

#endif //MOVIE_H