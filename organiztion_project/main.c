#include <stdio.h>
#include <stdlib.h>
#include "function.h"
#include<math.h>
int main()
{
int option;
   BEGING:  printf("\n\t\t******************SELCT ONE METHOD TO ADD TWO BINARY NUMBERS ************* \n");
   printf(" 1-Ripple \n 2-Carry look ahead \n 3-block CLA \n 4-Exit");
   printf("\nEnter your option: ");
   scanf("%d",&option);
   switch(option){
   case 1:
       Riple();
       //printf("hello from ripple");

       goto BEGING;
       break;
   case 2:
       CLA();

       goto BEGING;
       break;
   case 3:
       BlockCLA();

       goto BEGING;
       break;
   case 4:
    exit(1);
    break;
   default:

    printf("\n\nWrong selection \n");
    printf("back to begin \n");
    goto BEGING;

   }


}
