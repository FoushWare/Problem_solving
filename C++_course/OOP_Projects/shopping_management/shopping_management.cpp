
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:16                                                           *
    DATE:8/16/2017                                                         *
   Author: Ahmed Fouad (Foush)


#include <bits/stdc++.h>

//macro//
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define ll long long int
#define ld long double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;

*************************************************************************/

#include "shopping_management.h"
#include<iostream>
#include<algorithm>
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)

void store::InsertItem(std::string name,std::string company,float price,int copies){
    ItemEntry item;
    item.name=name;
    item.company=company;
    item.copies=copies;
    item.unitPrice=price;
    database.push_back(item);
    ItemNum=(int)database.size();
   /*
    for(int i=0;i<ItemNum;i++){             //This is placeholder i will remove it
        std::cout<<database[i].name<<"\n";
    }*/
}
void store::DeleteItem(std::string name){
    //std::cout<<"hello world\t"<<name;
     ItemEntry *searchItem=search(name);
    if(searchItem != NULL){
        database.erase(database.begin()+(searchItem-database.data()));
        std::cout<<"The item is deleted successuflly\n";

    }
    else{
        std::cout<<"item not found \n";
    }


}

void store::update(std::string name,int total,float price){
//std::cout<<"hello from update "<<name<<total<<price;
     ItemEntry *searchItem=search(name);
     if(searchItem !=NULL){

        searchItem ->copies += total;
        searchItem ->unitPrice  += price;
     }
     else{
         std::cout<<"item not found \n";
     }
}

ItemEntry* store::search(std::string name){
    //std::cout<<"hello from search\n"<<name;
     for(int i=0;i<(int)database.size();i++){
         if(name == database[i].name){
            return &database[i];
         }
     }
     return NULL;



}
