
/*************************************************************************
    Year:2017                                                         *
    month: 7                                                      *
    DAY:30                                                           *
    DATE:7/30/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include "librarymanagement.h"
#include<iostream>

#define pb push_back()

void Library::Insert_Book(Book_Entry book){
       VBook.push_back(book);

    std::cout<<"  book inserted successfully\n";
//    ++Books_Number;
}

void Library::Delete_Book(std::string name){
   //search in the books that exist
    for(int i=0; i < (int)VBook.size();i++){
        if(VBook[i].Name == name){
           VBook.erase(VBook.begin()+i);
           std::cout<<"Book deleted successfully\n\n";
           return;
        }
    }
    std::cout<<"the book is not exist in database\n\n";
}

Book_Entry* Library::Search_Book(std::string name){
    //search in the books that exist
    for(int i=0;i<(int)VBook.size();i++){
        if(VBook[i].Name == name){
           return &VBook[i];
        }
    }
    return NULL;
}
