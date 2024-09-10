#ifndef MEMBER_H
#define MEMBER_H

#include <string>
#include <vector>
#include "Book.h"
#include <iostream>

using namespace std;

class Member{
    private:
        string name;
        int ID;
        vector<Book> borrowedBooks;
    public:
        Member();
        Member(string name, int ID);

        string getName() const;
        int getID() const;
        void borrowBook(Book& book);
        void returnBook(Book& book);

        void displayBorrowedBooks() const;
};

#endif //MEMBER_H