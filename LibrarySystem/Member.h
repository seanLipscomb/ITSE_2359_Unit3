#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include "Book.h"

using namespace std;

class Member{
    private:
        string name;
        int ID;
        vector(Book) borrowedBooks;
    public:
        Member();
        Member(string name);

        string getName() const;
        string getID() const;
        void borrowBook(Book& book);
        void returnBook(Book& book);

        void displayBorrowedBooks() const;
};

#endif //MEMBER_H