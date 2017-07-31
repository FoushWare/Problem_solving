
/*************************************************************************
    Year:2017                                                         *
    month: 7                                                      *
    DAY:27                                                           *
    DATE:7/27/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/

#include "librarymanagement.h"
#include <iostream>
    Library lib;
    Book_Entry book;
    int option;
    std::string name;
    std::string author;
    std::string copies;

int main(void){


 BEGIN:std::cout<<"Enter you option\n";
    std::cout<<"1: insert book\n";
    std::cout<<"2: Delete book\n";
    std::cout<<"3: search book\n";
    std::cin>>option;


    switch (option) {
        case 1:
                {
                std::cout<<"Enter the book info like   name , Author , number of copies\n";
                std::cin.ignore();
                std::getline(std::cin,name);
                std::getline(std::cin,author);
                std::getline(std::cin,copies);

                int number=std::stoi(copies);

                   std::cout<<name<<'\t';

                    book.Name=name;
                    book.Author=author;
                    book.Copies=number;
                lib.Insert_Book(book);
                goto BEGIN;
                 }
            break;
        case 2:
                std::cout<<"Enter the name of the book your want to delete\n";
                std::cin.ignore();
                std::getline(std::cin,name);
                lib.Delete_Book(name);

                goto BEGIN;
            break;
        case 3:
                std::cout<<"Enter the name of the book you want to search for\n";
                Book_Entry*ptr;
                std::cin.ignore();
                std::getline(std::cin,name);
                ptr=lib.Search_Book(name);
                if(ptr != NULL){
                    std::cout<< "\n   book_name:  "<<ptr->Name << "\n   Author_Name:    "
                             << ptr->Author << "\n   copies avaliable:   " << ptr->Copies << "\n\n";
                  goto BEGIN;
                }else{std::cout<<"the book not found\n\n";}

                  goto BEGIN;
            break;

        default:

                goto BEGIN;
            break;
    }





   return 0;
}
