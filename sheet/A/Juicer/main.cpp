
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:12                                                           *
    DATE:8/12/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>


int main()
{
   int k_orang=0,k_fit=0,k_wast=0,k_total=0,K_wastcount=0,k_orgsize=0;

   std::cin>>k_orang>>k_fit>>k_wast;
   int arr[k_orang];

   for(int i=0;i<k_orang;i++){
       std::cin>>k_orgsize;
       arr[i]=k_orgsize;
   }

   for(int i=0;i<k_orang;i++){
       if(arr[i]<=k_fit){
           k_total +=arr[i];
           if(k_total>k_wast){
               ++K_wastcount;
           k_total =0;
           }
       }
   }


   std::cout<<K_wastcount;


    return 0;
}
