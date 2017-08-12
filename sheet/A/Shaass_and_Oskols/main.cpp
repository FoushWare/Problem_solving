
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:10                                                           *
    DATE:8/10/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>


int main()
{
   int krop=0,kbird=0; std::cin>>krop;
   int shoots=0;
   int rope_index=0;

   int array1[krop];


   for(int i=0;i<krop;i++){
       std::cin>>kbird;
       array1[i]=kbird;
   }

   int kshoots=0;
   std::cin>>kshoots;

   int array2[kshoots][2];

   for(int i=0;i<kshoots;i++){
       for(int j=0;j<2;j++){
           std::cin>>shoots;
          array2[i][j] =shoots;
       }
   }

   for(int i=0;i<kshoots;i++){

           rope_index=array2[i][0] -1; // the ith rope which he shoot
            if(rope_index !=0){
           array1[rope_index-1] +=array2[i][1]-1 ;//this is the left part
            }

          if(rope_index <krop-1){//if index == kshoots then array[index+1] not valid
           array1[rope_index+1] +=array1[rope_index]-array2[i][1];
          }


           array1[rope_index] =0;

   }

for(int i=0;i<krop;i++){
       std::cout<<array1[i]<<'\n';
   }




    return 0;
}
