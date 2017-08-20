
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
#include <iostream>
#include<shopping_management.h>

store s1;
std::string name;
std::string company;
std::string price;
std::string copies;
std::string total;




int main()
{
    char c='i';

      while(c !='e'){
          std::cout<<"Enter:\t\n \t i:insert\n \t d:DeleteItem\n \t s:search\n \t u:update\n \t e:exit\n";
          std::cin>>c;

          switch (c){
            case 'i':{
               std::cout<<"Enter name of item , companyname ,price ,copies\n";
               std::cin.ignore();//cause getline need /n to finish it's work and the previous cin give /n at the end
               std::getline(std::cin,name);
               std::getline(std::cin,company);
               std::getline(std::cin,price);
               float strPrice=std::stof(price);
               std::getline(std::cin,copies);
               int strCopies=std::stoi(copies);
               s1.InsertItem(name,company,strPrice,strCopies);
                  break;
                     }
                case 'd':{
                  std::cout<<"Enter the name of the item To delete";
                  std::cin.ignore();
                  std::getline(std::cin,name);
                  s1.DeleteItem(name);
                     break;}

                 case 's':{
                      std::cout<<"Enter the name of the item\n name:  ";
                      std::cin.ignore();//cause getline need /n to finish it's work and the previous cin give /n at the end
                      std::getline(std::cin,name);
                      ItemEntry *searchQuery=s1.search(name);
                      std::cout<<"********searching Result**********\n\n";
                      if(searchQuery != NULL){
                      std::cout<<"\tname :\t"<<searchQuery->name;
                      std::cout<<"\n\tcompany:"<<searchQuery->company;
                      std::cout<<"\n\tprice :\t"<<searchQuery->unitPrice;
                      std::cout<<"\n\tcopies:\t"<<searchQuery->copies;
                      }else{
                          std::cout<<"item was not fouad\n";
                      }

                     std::cout<<"\n**************************\n\n";

                     break;
                    }

                 case 'u':{
                     std::cin.ignore();
                     std::cout<<"enter details for update\n\n";
                     std::cout<<"Enter the name\n"; std::getline(std::cin,name);
                     std::cout<<"Enter the total items\n"; std::getline(std::cin,total);
                     std::cout<<"Enter the total price\n"; std::getline(std::cin,price);

                     s1.update(name,stoi(total),stof(price));

                     break;
                   }

               }//End of switch
        }//End of while
    return 0;

}
