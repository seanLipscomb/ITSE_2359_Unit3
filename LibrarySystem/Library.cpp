#include "Library.h"
#include <iostream>
//final commit
using namespace std;

void Library::addBook(const Book& book) {
    inventory.push_back(book);
}

void Library::addMember(const Member& member) {
    members.push_back(member);
}

void Library::borrowBook(const string& bookTitle, Member& member) {
    for (auto& book : inventory) {
        if(book.getTitle() == bookTitle && book.isAvailable()) {
            member.borrowBook(book);
            break;
        }
    }
}

void Library::returnBook(const string& bookTitle, Member& member) {
    for (auto& book : inventory) {
        if (book.getTitle() == bookTitle && !book.isAvailable()) {
            member.returnBook(book);
            break;
        }
    }
}

void Library::displayAvailableBooks() const {
    cout << "Available books:\n";
    for (const auto& book : inventory) {
        if (book.isAvailable()) {
            cout << book.getTitle() << " (" << book.getYearPublished() << ") by " << book.getAuthor() << "\n";
        }
    }
}