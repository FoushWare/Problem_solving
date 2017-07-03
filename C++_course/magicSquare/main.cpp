#include <iostream>
/* magic square in which  some of any row =sum of any column =sum of MainDiagonal =sum of AntiDiagonal


*/
using namespace std;

const int N=3;
int sumRow(int Row_num,int square[N][N]);
int sumCol(int col_num,int square[N][N]);
int sumMainDiag(int square[N][N]);
int sumAntiDiag(int square[N][N]);
bool validate(int square[N][N]);
int main()
{
    int square[N][N]={
                            {8,1,6},
                            {3,5,7},
                            {4,9,2}
    };

    if(validate(square)) cout<<"vaild Foush\n";
    else                 cout<<"not Vaild Foush\n";

   square[0][0]++;//this will increase the first elemet 8 -> 8+1=9  and this will make the square Matrix not magic

    if(validate(square)) cout<<"vaild Foush\n";
    else                 cout<<"not vaild foush\n";
}



//implemention of the function needed to cal magic square
int sumRow(int Row_num,int square[N][N]){
    int sum=0;
    for(int j=0;j<N;j++){
        sum += square[Row_num][j];


    }
    return sum;

}
int sumCol(int col_num,int square[N][N]){
    int sum=0;
    for(int i=0;i<N;i++){
       sum += square[i][col_num];
    }
    return sum;

}
int sumMainDiag(int square[N][N]){

   int sum=0,pos=0;
   for(int i=0;i<N;i++)sum += square[pos][pos],pos++;

  return sum;

}
int sumAntiDiag(int square[N][N]){
    int sum=0,pos=0;
   for(int i=0;i<N;i++)sum += square[pos][N-1-pos],pos++;

  return sum;


}
bool validate(int square[N][N]){
   int val=sumRow(0,square);

   for (int i=0;i<N;i++){
      if(val != sumRow(i,square)) return false;
      if(val != sumCol(i,square)) return false;
   }

   if(val != sumMainDiag(square)) return false;
   if(val != sumAntiDiag(square)) return false;

   //if it pass all tests this mean that it is magic
   return true;



}
