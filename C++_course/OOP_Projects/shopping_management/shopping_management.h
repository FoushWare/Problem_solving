
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
#ifndef SHOPPING_MANAGEMENT_H
#define SHOPPING_MANAGEMENT_H
#include<vector>
#include<string>
class ItemEntry{//base class
    public:
        std::string name;
        std::string company;
        float unitPrice;
        int copies;
};

class store
{
    public:
        int ItemNum;
        std::vector<ItemEntry> database;
        store(){ItemNum=0;}//constractor
        //function used in the project for every store
        void InsertItem(std::string name,std::string company,float price,int copies); //insert and item in the store
        void DeleteItem(std::string name);
        ItemEntry *search(std::string name);
        void update(std::string name,int total,float price);
};





#endif // SHOPPING_MANAGEMENT_H
