#include <iostream>

using namespace std;
int a4(int n);
int a3(int n);
int a2(int n);
int a1(int n);
int main()
{
   int result=a4(4);
   cout<<"the result is \t "<<result<<'\n';
}
int a4(int n){
   return n * a3(n);
}
int a3(int n){
   return n * a2(n);
}
int a2(int n){
   return n * a1(n);
}
int a1(int n){
   return n;
}
/****
        The observation here is : => i'm calling function that do the same
        behivar of my function so, i can instead calling my function and
        set a base case

****/
