#include "Member.h"
#include <iostream>
//final commit
using namespace std;

Member::Member() : name(""), ID(0) {}

Member::Member(string name, int ID) : name(name), ID(ID) {}

string Member::getName() const { return name; }
int Member::getID() const { return ID; }

void Member::borrowBook(Book& book) {
    if (book.isAvailable()){
        book.borrowBook();
        borrowedBooks.push_back(book);
    }
}

void Member::returnBook(Book& book) {
    for (size_t i=0; i<borrowedBooks.size(); i++) {
        if (borrowedBooks[i].getTitle() == book.getTitle()){
            book.returnBook();
            borrowedBooks.erase(borrowedBooks.begin() + i);
            break;
        }
    }
}

void Member::displayBorrowedBooks() const {
    cout << "Books borrowed by " << name << " (ID: " << ID << "):\n";
    for (const auto& book : borrowedBooks) {
        cout << book.getTitle() << " (" << book.getYearPublished() << ")\n";
    }
}