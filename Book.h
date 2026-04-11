#include <iostream>
using namespace std;

class Book {
public:
    string title; //class attributes
    string author;
    int ISBN;
    bool availability;

    //    void setBookDetails(string title, string author, int ISBN, bool availability){
    //        this->title=title;
    //        this->author=author;
    //        this->ISBN=ISBN;
    //        this->availability=availability;
    //    }
    //


    // Implemented in book.cpp
    void setBookDetails(string title_b, string author_b, int ISBN_b, bool availability_b);

    void displayBookDetails();

    void borrowBook();

    void returnBook();


    void new_book();

    //    void set_BookDetails(string title_b, string author_b, int ISBN_b, bool availability_b) {
    //        title = title_b;
    //        author = author_b;
    //        ISBN= ISBN_b;
    //        availability = availability_b;
    //    }




    //    Book(string title_b, string author_b, int ISBN_b, bool availability_b) {
    //        title = title_b;
    //        author = author_b;
    //        ISBN= ISBN_b;
    //        availability = availability_b;
    //    }
};