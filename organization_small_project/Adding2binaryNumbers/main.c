#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include<process.h>
#include<math.h>



int main()
{
int option;
   M:  printf("\n\t\t******************SELCT ONE METHOD TO ADD TWO BINARY NUMBERS ************* \n");
   printf(" 1-Ripple \n 2-Carry look ahead \n 3-block CLA");
   printf("\nEnter your option: ");
   scanf("%d",&option);

   switch(option){
   case 1:
       Riple();
       //printf("hello from ripple");
       getch();
       break;
   case 2:
       CLA();
       getch();
       break;
   case 3:
       BlockCLA();
       getch();
       break;
   default:

    printf("\n\nWrong selection \n");
    printf("back to begin \n");
    goto M;

   }


}
