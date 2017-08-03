
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:3                                                           *
    DATE:8/3/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>
#include<cmath>

int K_officer=0,K_untreated=0,K_crimes=0;


int main()
{
    std::cin>>K_crimes;
    assert(K_crimes>=1 &&K_crimes<=(pow(10,5)));
    int array[K_crimes]={0};



    for(int i=0;i<K_crimes;i++){
        std::cin>>array[i];
    }

   for(int i=0;i<K_crimes;i++){

       if(array[i]>0){
        assert(array[i]<=10);
           K_officer += array[i];
       }


       if(array[i]<0){

          if(K_officer == 0)         K_untreated +=1;
          else if(K_officer>0)       K_officer -=1;

       }

   }

std::cout<<K_untreated;


    return 0;
}
