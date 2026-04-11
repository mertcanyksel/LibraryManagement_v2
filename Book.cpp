#include "Book.h"


void Book::setBookDetails(string title_b, string author_b, int ISBN_b, bool availability_b) {
    title = title_b;
    author = author_b;
    ISBN = ISBN_b;
    availability = availability_b;
}



void Book::displayBookDetails() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << (availability ? "Available" : "Not available") << endl;
}


void Book::borrowBook() {
    if (availability != true) {
        cout << "Book already taken." << endl;
    }
    char decision;
    cout << "Are you sure borrow the book? (y/n) "; cin >> decision;

    if (decision == 'y' or decision == 'Y') {
        availability = false;
        cout << "Borrowed successfully" << endl;
    }

    else if (decision == 'n' or decision == 'N') {
        cout << "Borrow cancelled" << endl;
    }

    else {
        cout << "You typed wrong character" << endl;
    }
}


void Book::returnBook() {
    if (availability == true) {
        cout << "Book is already available in lib" << endl;
    }
    char decision;
    cout << "Are you sure return the book? (y/n)"; cin >> decision;

    if (decision == 'y' or decision == 'Y') {
        availability = true;
        cout << "Returned successfully" << endl;
    }

    else if (decision == 'n' or decision == 'N') {
        cout << "Return cancelled" << endl;
    }

    else {
        cout << "You typed wrong character" << endl;
    }

}




void Book::new_book() {
    cout << "Title of the new book: "; cin >> title;
    cout << "Author of the new book: "; cin >> author;
    availability = true;


}
