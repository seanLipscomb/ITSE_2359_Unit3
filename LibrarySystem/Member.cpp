#include "Member.h"
#include <iostream>

using namespace std;

Member::Member() : name(""), ID(0) {}

Member::Member(string name, int ID): name(name), ID(ID) {}

string Member::getName() const { return name; }
int Member::getID() const { return ID; }

void Customer::borrowBook(Book& book) {
    if (book.isAvailable()){
        book.borrow();
        borrowedBooks.push_back(book);
    }
}

void Customer::returnBook(Book& book) {
    for (size_t i=o; i<borrowedBooks.size(); i++) {
        if (borrowedBooks[i].getTitle() == book.getTitle()){
            book.returnBook();
            borrowedBooks.erase(borrowedBooks.begin() + i);
            break;
        }
    }
}

void Customer::displayBorrowedBooks() const {
    cout << "Books borrowed by " << name << " (ID: " << ID << "):\n";
    for (const auto& book : borrowedBooks) {
        cout << book.getTitle() << " (" << book.getYearPublished() << ")\n";
    }
}