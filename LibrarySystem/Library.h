#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Member.h"
#include "Book.h"
#include <string>
#include <iostream>

using namespace std;

class Library {
    private:
        vector<Book> inventory;
        vector<Member> members;

    public:
        void addBook(const Book& book);
        void addMember(const Member& member);

        void borrowBook(const string& bookTitle, Member& member);
        void returnBook(const string& bookTitle, Member& member);

        void displayAvailableBooks() const;
};

#endif //LIBRARY_H