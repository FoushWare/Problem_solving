
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:2                                                           *
    DATE:8/2/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>


int k_n=0,k_p=0,k_v=0,k_t=0,k_s=0;
int main()
{
std::cin>>k_n;
assert(k_n>=1 && k_n<=1000);

for(int i=0;i< k_n;i++){
  std::cin>>k_p>>k_v>>k_t;

  if((k_p&&k_v==1)||(k_p&&k_t==1)||(k_v&&k_t==1)) ++k_s;

}

std::cout<<k_s;


    return 0;
}
