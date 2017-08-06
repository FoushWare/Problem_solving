
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:3                                                           *
    DATE:8/3/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>
#include<string>
#include<cmath>


int main()
{

int k1=0,k2=0,k3=0,k4=0,kc=0;
std::string s;

   std::cin>>k1>>k2>>k3>>k4;
   std::cin>>s;
   assert(s.size()>=1 && s.size()<=pow(10,5));
   int size=(int)s.length();
   for(int i=0;i<size;i++){
     int ki=(int)s[i]-'0';
    if(ki==1){             kc +=k1;}
      else if(ki==2) {         kc +=k2;}
      else if(ki==3) {         kc +=k3;}
      else if(ki==4) {         kc +=k4;}
      else{}


      }

std::cout<< kc;
    return 0;
}
