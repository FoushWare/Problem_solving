
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:3                                                           *
    DATE:8/3/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<cctype>
#include<string>
#include<cmath>
#include<assert.h>
int main()
{
   std::string s;
   std::cin>>s;

   assert(s.length()>0 && s.length()< pow(10,3));
char a=std::toupper(s[0]);
 s[0]=a;

std::cout<<s;

    return 0;
}
