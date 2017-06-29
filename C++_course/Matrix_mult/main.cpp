#include <iostream>
#include<assert.h>//for assert function
using namespace std;
const int row1=3,row2=2,rowRes=3,col1=2,col2=3,colRes=3;
void Matrix_mult(int arr1[row1][col1],int arr2[row2][col2],int Res[rowRes][colRes]);
int main()
{
   int arr1[row1][col1]={1,2,3,4,5,6};
   int arr2[row2][col2]={7,8,9,10,11,12};
   int Res[rowRes][colRes];


   Matrix_mult(arr1,arr2,Res);
}

void Matrix_mult(int arr1[row1][col1],int arr2[row2][col2],int Res[rowRes][colRes]){
   //check if the two arrays achieve the condition of col1==row2 if not assert the program
   assert(col1==row2);

   //initalize the Res array cause we will use it as accumlator
   for(int y=0;y<rowRes;y++){
       for(int x=0;x<colRes;x++){Res[y][x]=0;}
   }

//The multiplication process
   for(int r=0;r<rowRes;r++){
       for(int c=0;c<colRes;c++){

           for(int k=0;k<row2;k++){Res[r][c]+=arr1[r][k] * arr2[k][c];}
       }//col loop
   }//row loop

   //Print the resutl array
    for(int y=0;y<rowRes;y++){
       for(int x=0;x<colRes;x++){cout<<" "<<Res[y][x]<<" ";}
   }

}
