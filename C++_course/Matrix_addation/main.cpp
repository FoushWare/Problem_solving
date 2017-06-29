#include <iostream>

using namespace std;
const int row=2,col=2;
void Matrix_Addtion(int arr1[row][col],int arr2[row][col],int Res[row][col]);
int main( )
{
   int arr1[row][col]={{1,2},{3,4}};
   int arr2[row][col]={{5,6},{7,8}};
   int Res[row][col];

 Matrix_Addtion(arr1,arr2,Res);
}
void Matrix_Addtion(int arr1[row][col],int arr2[row][col],int Res[row][col]){

   for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){ Res[i][j]=arr1[i][j]+arr2[i][j];}
   }

  /*printing the Result aray*/
   for(int k=0;k<row;k++){
       for(int z=0;z<col;z++){cout<<' '<<Res[k][z]<<' ';}
   }

}
