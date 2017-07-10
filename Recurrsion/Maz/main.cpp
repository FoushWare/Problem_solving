#include <iostream>

using namespace std;
const int Max=5;
bool vis[Max][Max] ={0}; //initalize array with false
int maz[Max][Max]={
                { 0  ,'S','X', 0,  0      },
                { 0  , 0 ,'X', 0, 'E'     },
                { 0  , 0 , 0 , 0 ,'X'     },
                { 0  , 0 , 0 , 0, 'X'     },
                {'X', 'X','X','X',0       }

};



bool findEnd(int r,int c);
bool valid(int r,int c);

int main()
{
if( findEnd(0,1) ) cout<<"perfect foush you have solved the maz :) \n";
else
    cout<<"the maz is not solveable :( \n";

}

bool findEnd(int r,int c){
//invalid postion or invalid block
   if(!valid(r,c) || maz[r][c]=='X' || vis[r][c]==1)  return false;

           vis[r][c] == 1; //we just visited it don't allow anyone return back to it
//base case
           if(maz[r][c]=='E') return true;

    //sub_problem
           if(findEnd(r-1,c)) return true; //up
           if(findEnd(r+1,c)) return true; //down
           if(findEnd(r,c+1)) return true; //right
           if(findEnd(r,c-1)) return true; //left

   vis[r][c] = 0; //undo marking to make other paths use it

   return false; //can't find the end

}

bool valid(int r,int c){
    if(r > Max-1)return false;
    if(c > Max-1)return false;
    return true;
}
