#include <iostream>

//this method to find the lenght of the sequence
// E.g. 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
// Given n, find length of 3n+1 sequence. E.g. F3n_1(22) = 16
using namespace std;
int F3N_1(int Num);
int main()
{
    cout<<"the sequence length is "<<F3N_1(22)<<endl;
}

int F3N_1(int Num){
    if(Num == 1) return 1; //base case

   if(Num%2==0) //even
    return 1 + F3N_1(Num/2);      // 1 cause we had element print it before cal

     else
           return 1 + F3N_1(3 * Num + 1);
}
