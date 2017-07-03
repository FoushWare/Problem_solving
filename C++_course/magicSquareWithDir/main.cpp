#include <iostream>

using namespace std;

const int N=3;
    enum dir{UP,DOWN,RIGHT,LEFT,UP_RIGHT,UP_LEFT,DOWN_RIGHT,DOWN_LEFT};
int dir_r[]={ -1 , 1,  0  , 0  , -1     , -1    ,   1      ,  1      };
int dir_c[]={ 0  , 0,  1  , -1  , 1     , -1    ,   1      ,  -1      };
int sumWithDir(int r,int c,dir mov_dir,int steps,int square[N][N]);
bool validMagicSquare(int square[N][N]);
int main()
{

   int square[N][N]={
                        {8,1,6},
                        {3,5,7},
                        {4,9,2}
   };

   if(validMagicSquare(square)) cout<<"Magic square foush\n";
   else                         cout<<"Not Magic square foush\n";
  //change it to make it not magic square
   square[0][0]++;

   if(validMagicSquare(square)) cout<<"Magic square foush\n";
   else                         cout<<"Not Magic square foush\n";

}
int sumWithDir(int r,int c,dir mov_dir,int steps,int square[N][N]){
   int sum=0;
   for(int i=0;i<steps;i++){
       sum += square[r][c];
       r += dir_r[mov_dir];
       c += dir_c[mov_dir];
   }

   return sum;

}
bool validMagicSquare(int square[N][N]){
   int val=sumWithDir(0,0,RIGHT,N,square);

  for(int i=0;i<N;i++){
      if(val != sumWithDir(i,0,RIGHT,N,square) ) return false;  //for all rows
      if(val != sumWithDir(0,i,DOWN,N,square) ) return false;  //for all columns

     if(val != sumWithDir(0,0,DOWN_RIGHT,N,square) ) return false;
     if(val != sumWithDir(0,N-1,DOWN_LEFT,N,square) ) return false;

    //if pass all conditions
     return true;

  }

}
