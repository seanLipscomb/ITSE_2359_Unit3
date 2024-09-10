#include "Book.h"
#include <iostream>
using namespace std;

//default constructor
Book::Book() : title(""), author(""), yearPublished(0), available(false) {}

//parameterized constructor
Book::Book(string title, string author, int yearPublished, bool isAvailable)
    : title(title), author(author), yearPublished(yearPublished), available(isAvailable) {}

//getter for movie title
string Book::getTitle() const{
    return title;
}

//getter for author
string Book::getAuthor() const{
    return author;
}

//getter for year of publication
int Book::getYearPublished() const{
    return yearPublished;
}

//getter for availability
bool Book::isAvailable() const{
    return isAvailable;
}

//method to borrow the book
void Book::borrowBook(){
    if (available){
        available = false;
    }
}

//method to return book
void Book::returnBook(){
    available = true;
}