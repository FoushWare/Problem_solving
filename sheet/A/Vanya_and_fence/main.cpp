
/*************************************************************************
    Year:2017                                                         *
    month: 7                                                      *
    DAY:29                                                           *
    DATE:7/29/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>
using namespace std;
int h,n,a;
int width=0;
int main()
{
   cin>>n>>h;
   assert(h != 1000);
   assert(n != 1000);
   for(int i=0;i<n;i++){
       cin>>a;

      if(a<=h) width += 1;

       if(a > h){
           width +=2;
       }

   }
   cout<<width;


    return 0;
}
