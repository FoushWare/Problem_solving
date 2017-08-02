
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:3                                                           *
    DATE:8/3/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>

int main()
{

int n; std::cin>>n;
int kth=0;

assert(n>=1 && n<=50);

char array[n];

for(int i=0;i<n;i++){
std::cin>>array[i];
}

for(int i=0;i<n-1;i++){
    if(array[i+1]==array[i]){ kth +=1;}
}

std::cout<<kth;


    return 0;
}
