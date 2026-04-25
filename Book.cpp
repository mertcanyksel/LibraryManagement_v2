#include "Book.h"



void Book::setBookDetails(string title_b, string author_b, int ISBN_b, bool availability_b, string dateTime_b) {
    title = title_b;
    author = author_b;
    ISBN= ISBN_b;
    availability = availability_b;
    dateTime= dateTime_b;
}



void Book::displayBookDetails(){
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << (availability ? "Available" : "Not available") << endl;
    cout << "Date Added: " <<dateTime<<endl;
}


void Book::borrowBook(){
    if (availability!= true){
        cout << "Book already taken."<<endl;
    }
    char decision;
    cout << "Are you sure borrow the book? (y/n) "; cin >> decision;
    
    if (decision=='y' or decision=='Y'){
        availability=false;
        cout << "Borrowed successfully"<<endl;
    }
    
    else if (decision=='n' or decision=='N'){
        cout << "Borrow cancelled"<< endl;
    }
    
    else {
        cout << "You typed wrong character"<<endl;
    }
}


void Book::returnBook(){
    if (availability==true){
        cout << "Book is already available in lib"<< endl;
    }
    char decision;
    cout << "Are you sure return the book? (y/n)" ; cin >> decision;
    
    if (decision=='y' or decision=='Y'){
        availability=true;
        cout << "Returned successfully"<<endl;
    }
    
    else if (decision=='n' or decision=='N'){
        cout << "Return cancelled"<< endl;
    }
    
    else {
        cout << "You typed wrong character"<<endl;
    }
    
}

bool isValidString(const string& str) {
    for (char c : str) {
        if (!isalpha(c) && c != ' ') { // allow spaces
            return false;
        }
    }
    return true;
}


string Book::get_Date(){
    char buffer[11]; //That’s 10 characters, so 11 is correct (10 + 1 for \0).
    
    time_t t = time(nullptr);   //time(nullptr) returns the current time as a time_t value (number of seconds since Jan 1, 1970).
                                //This is stored in variable t.
    strftime(buffer,sizeof(buffer),"%d/%m/%Y",localtime(&t));
    //Formats the time into a readable string and stores it in buffer
    //cout <<buffer<<endl;
    
    return string(buffer);
    /*
     buffer → where the result is stored
     sizeof(buffer) → max size (prevents overflow)
     "%d/%m/%Y" → format:
     %d = day (01–31)
     %m = month (01–12)
     %Y = full year (e.g., 2026)
     */
}

void Book::new_book() {
    do {
        cout << "Enter title: ";
        cin >> ws;              // clears leftover whitespace/newline
        getline(cin, title);
        
        if (!isValidString(title)) {
            cout << "Error: Title must contain only letters.\n";
        }
        
    } while (!isValidString(title));
    
    do {
        cout << "Enter author: ";
        cin >> ws;              // same fix here
        getline(cin, author);
        
        if (!isValidString(author)) {
            cout << "Error: Author must contain only letters.\n";
        }
        
    } while (!isValidString(author));
    availability=true;
    dateTime=get_Date();
    
}
