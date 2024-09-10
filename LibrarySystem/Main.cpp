#include "Book.h"
#include "Member.h"
#include "Library.h"

using namespace std;

int main(){
    Library library;

    //alphabetical by book title
    library.addBook(Book("In the Heart of the Sea", "Nathan Philbrick", 2000));
    library.addBook(Book("Moby Dick", "Herman Melville", 1851));
    library.addBook(Book("The Old Man and the Sea", "Ernest Hemingway", 1952));
    library.addBook(Book("The Sea Wolf", "Jack London", 1904));
    library.addBook(Book("Twenty Thousand Leagues Under the Sea", "Jules Verne", 1870));

    Member member1("River Song", 15);
    Member member2("Sean Shanty", 25);

    library.addMember(member1);
    library.addMember(member2);

    library.displayAvailableBooks();

}