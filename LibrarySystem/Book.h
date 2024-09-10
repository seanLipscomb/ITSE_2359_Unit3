#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
    private:
        string title;
        string author;
        int yearPublished;
        bool isAvailable;
    public:
        // default constructor
        Book();
        // parameterized constructor
        Book(string title, string author, int yearPublished, bool isAvailable = "false");
        // getters
        string getTitle();
        string getAuthor();
        int getYearPublished();
        bool isAvailable();
        // methods to borrow and return books
        void borrowBook();
        void returnBook();

};
}
#endif //MOVIE_H