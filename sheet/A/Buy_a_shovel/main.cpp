
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:6                                                           *
    DATE:8/6/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>

int kp=0,kr=0,knum=0;
int main()
{
 int kp=0,kr=0,knum=0;   std::cin>>kp>>kr;

    assert(kp>=1 && kp<=1000 && kr>=1 && kr<=9);

    for(int i=1;i<1000;i++){
       if( (kp*i)%10 == kr || (kp*i)%10 ==0 ){
          knum=i;
          break;
       }

    }

    std::cout<<knum;
    return 0;
}
