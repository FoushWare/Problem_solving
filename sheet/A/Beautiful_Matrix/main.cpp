
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:2                                                           *
    DATE:8/2/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>

int array[5][5];
int ki=0,kj=0;
int mov=0;
int main()
{
   for(int i=0;i<5;i++){

       for(int j=0;j<5;j++){
          std::cin>>array[i][j];
          if(array[i][j]==1){ ki=i; kj=j;}
       }

   }


  while(ki<2){
     ++mov;
      ++ki;
  }
  while(ki>2){
     ++mov;
      --ki;
  }
  while(kj>2){
      --kj;
      ++mov;

  }
  while(kj<2){
      ++mov;
      ++kj;
  }

std::cout<<mov;


    return 0;
}
