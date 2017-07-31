
/*************************************************************************
    Year:2017                                                         *
    month: 7                                                      *
    DAY:30                                                           *
    DATE:7/30/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#ifndef LIBRARYMANAGEMENT_H
#define LIBRARYMANAGEMENT_H

#include<string>
#include<vector>

    class Book_Entry{
        public:
            int Copies;
            std::string Name;
            std::string Author;

    };

    class Library{
        public:
            Library(){
            }

            //we need container to store books with there lables -name -author -copies
            std::vector<Book_Entry> VBook;
            //void Insert_Book(std::string name,std::string author,int copies);
            void Insert_Book(Book_Entry book);

            void Delete_Book(std::string name);
            Book_Entry* Search_Book(std::string name);

    };


#endif // LIBRARYMANAGEMENT_H
