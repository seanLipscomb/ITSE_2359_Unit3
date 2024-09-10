#define BOOK_H
#ifndef BOOK_H

#include <iostream>
#include <vector>
#include "Member.h"

namespace std{
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
            // getter
            string getTitle();
            string getAuthor();
            int getYearPublished();
            bool isAvailable();
            //
            void borrowBook();
            void returnBook();

};
}