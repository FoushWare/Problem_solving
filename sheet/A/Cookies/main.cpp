
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:6                                                           *
    DATE:8/6/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<vector>
#include<assert.h>

int main()
{
    std::vector<int> vi;
    int kb=0,ks=0,kc=0,sum=0;         std::cin>>kb;
    assert(kb>=1 &&kb<=100);
    for(int i=0;i<kb;i++){
       std::cin>>kc;
    assert(kc>=1 &&kc<=100);
       sum +=kc;
       vi.push_back(kc);
    }

//the sum maybe odd or even

   int sumMod=sum%2;

   for(int i=0;i<kb;i++){
       //if((sum-vi[i])%2==0){ sum -= vi[i]; ++ks;}
       if(vi[i]%2==sumMod){++ks;}
   }
   std::cout<<ks;


    return 0;
}
