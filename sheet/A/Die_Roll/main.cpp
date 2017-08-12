
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:7                                                           *
    DATE:8/7/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<string>
int main()
{

   /* This is my solution and need boost library to convert float to rational but i didn't do that
   double ky=0.0,kw=0.0,kd=0.0,kG=0.0;
   std::cin>>ky;
   kG=ky;
   std::cin>>kw;
   if(kG==kw) {//dot win
       std::cout<<1<<'/'<<1;
   }
   if(kG==7 || kw==7){ //impossible

       std::cout<<0<<'/'<<1;
   }
   if(kw>kG){//get the right KG
       kG=kw;
       kd=((6-kG)+1)/6;
     std::cout<<kd;
   }
if(kw<kG){//get the right KG

       kd=((6-kG)+1)/6;
     std::cout<<kd;
   }
*/





   int ky=0,kw=0,kG=0;
   std::cin>>ky;
   std::cin>>kw;
    kG=std::max(ky,kw);


   //This probabiliy is pre_calculated

 std::string prob[7] ={" ","1/1","5/6","2/3","1/2","1/3","1/6"};
if(kG==7 || kw==7){ //impossible

       std::cout<<0<<'/'<<1;
       return 0;
   }


std::cout<<prob[kG];





    return 0;
}
