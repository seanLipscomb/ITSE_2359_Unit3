#include "Book.h"

using namespace std;

//default constructor
Book::Book() : title(""), author(""), yearPublished(0), isAvailable(false) {}

//parameterized constructor
Book::Book(std::string title, std::string author, std::int yearPublished, std::bool isAvailable)
    : title(title), author(author), yearPublished(yearPublished), isAvailable(isAvailable) {}

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
void Movie::borrowBook(){
    if (isAvailable){
        isAvailable = false;
    }
}

//method to return book
void Movie::returnBook(){
    isAvailable = true;
}