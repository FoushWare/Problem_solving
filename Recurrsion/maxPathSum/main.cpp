#include <iostream>
#include<algorithm>
using namespace std;
const int MAX=3;
int grid[MAX][MAX]={
                        {5,1,2},
                        {6,7,8},
                        {1,8,9}
    };

bool valid(int r, int c);//check not get out grid
int maxPathSum(int r,int c);

int main()
{
    cout<<"the sum of the  longest path is: "<<maxPathSum(1,0);
}


int maxPathSum(int r,int c){

    if(!valid(r,c)) return 0;

    //Reach the last element in the last right down
    if(r == MAX-1 && c == MAX-1) return grid[r][c];

    int path1=maxPathSum(r,c+1);//Right
    int path2=maxPathSum(r+1,c);//down

    return grid[r][c]+max(path1,path2);

}

bool valid(int r, int c){
    if(r > MAX-1) return false;
    if(c > MAX-1) return false;
     return true;
}
