
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:2                                                           *
    DATE:8/2/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>

int k_l=0,k_b=0,k_y=0;



int main()
{

std::cin>>k_l>>k_b;
assert(k_l >=1 && k_l<=k_b && k_b<=10);

while(1){
    k_l *=3;
    k_b *=2;
    if(k_l <= k_b)
        ++k_y;
    else{
        ++k_y;
        break;
    }

}
std::cout<<k_y;

    return 0;
}
