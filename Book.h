#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Book {
public:
    string title; //class attributes
    string author;
    int ISBN;
    bool availability;
    string dateTime;
    

    void setBookDetails(string title_b, string author_b, int ISBN_b, bool availability_b, string dateTime);

    void displayBookDetails();
    
    void borrowBook();
    
    void returnBook();
    
    
    void new_book();
    
    string get_Date();
    //void insertSort(vector<Book>& library);

};
    //    }




    //    Book(string title_b, string author_b, int ISBN_b, bool availability_b) {
    //        title = title_b;
    //        author = author_b;
    //        ISBN= ISBN_b;
    //        availability = availability_b;
    //    }
};
