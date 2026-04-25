#include <iostream>
#include <vector>
#include "Book.h"


int main(){
    
    vector<Book> library(5);
    library[0].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", 104, true, "20/01/1999");
    library[1].setBookDetails("1984", "George Orwell", 103, true,"02/11/2001");
    library[2].setBookDetails("To Kill a Mockingbird", "Harper Lee", 102, true,"15/03/2015");
    library[3].setBookDetails("Moby Dick", "Herman Melville", 101, true,"17/01/2015");
    library[4].setBookDetails("Pride and Prejudice", "Jane Austen", 100, true,"20/01/1999");
    
    
    
    
    int inputISBN;
    while (true){
        cout << "====== Library Books ======"<<endl;
        for (int i=0 ; i < library.size();i++){
            for (int j=i+1;j<library.size();j++){
                if(library[j].ISBN < library[i].ISBN){
                    Book temp= library[j];
                    library[j]=library[i];
                    library[i]= temp;
                }
                
            }
        }
            
        for (int i = 0; i < library.size(); i++){
            library[i].displayBookDetails();
            cout << "===========================" << endl;
        }
        
        cout << endl;
        
        
        int decisions;
        cout << "==========================="<<endl;
        cout << "Borrow       :1"<<endl;
        cout << "Return       :2"<<endl;
        cout << "Add new book :3"<<endl;
        cout << "Exit         :0"<<endl;
        cout << "Decision     :"; cin >> decisions;
        if(decisions==0){
            cout << "Exiting system..."<<endl;
            break;
        }
        
        
        bool bookFound= false;
        
        if(decisions==1 or decisions==2){
            cout << "Enter ISBN , 0 to exit: "; cin >> inputISBN;
            if(inputISBN==0){
                cout << "Wrong ISBN"<<endl;
                //break;
            }
            for (int i=0; i< library.size();i++){
                if (inputISBN==library[i].ISBN){
                    bookFound=true;
                    
                    if (decisions==1){
                        library[i].borrowBook();
                    }
                    else{
                        library[i].returnBook();
                    }
                    break;
                    
                }
                
            }
        }
        
        else if (decisions == 3) {
            Book newBook;               // create ONE book
            newBook.new_book();         // ask user for details
            
            library.push_back(newBook); // add to library
            cout <<"Total book --> " <<library.size()<< endl;
            
            library[library.size()-1].ISBN=library[library.size()-2].ISBN+1;
            cout << "Book added successfully!" << endl;
        }
        //unsigned long librarySize=library.size();
        
        
        
//        if (!bookFound) {
//            cout << endl;
//            cout << "***************************" << endl;
//            cout << "You typed unavailable ISBN" << endl;
//            cout << "***************************" << endl;
//            cout << endl;
//        }
    }
    
    
}



