#include <iostream>

using namespace std;
const int N=5;
//Direction
enum dir {RIGHT=0,DOWN,LEFT,UP};
int dir_r[]={0  ,   1,   0,-1};
int dir_c[]={1  ,   0,  -1, 0};


void spiral_matrix(int arr[N][N],int N);
int main()
{
    int arr[N][N]={
                        { 1 , 2 , 3 , 4 ,  5 },
                        { 6 , 7 , 8 , 9  , 10 },
                        { 11 ,12 ,13, 14 , 15 },
                        { 16 ,17, 18, 19 , 20},
                        { 21 ,22, 23, 24,  25}



    };
    spiral_matrix(arr,1); //Test boudaries
    spiral_matrix(arr,2);//Test boudaries
    spiral_matrix(arr,3);//Test boudaries
    spiral_matrix(arr,4);//Test even
    spiral_matrix(arr,5);//Test odd
}


void spiral_matrix(int arr[N][N],int N){

cout<<"Case N = "<<N<<"\t";
      int CNT=0,dir=0,steps=N,r=0,c=0;

   while(CNT < N*N){
        //The pattern is 4 direction
      for(int d=0;d<4 &&CNT<N*N;d++){

            int m=--steps;
            if(d==3) --m;

            for(int i=0; i<m && CNT< N*N ;i++){
                cout<<arr[r][c]<<' ';
                ++CNT, r += dir_r[dir], c += dir_c[dir];//move step
            }
            dir=(dir+1)%4;
      }//End of tracing the four direction of the pattern

       //printing the last element in the last direction of the pattern
                cout<<arr[r][c]<<' ';
++CNT, r += dir_r[dir], c += dir_c[dir];
steps -= 2;
//5=> 3 =>1

   }//End brace of while loop (stop condition ) printing all elements in array

   cout<<"\n";
}//End brace of spiral_matrix
