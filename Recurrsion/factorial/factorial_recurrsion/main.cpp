#include<iostream>
using namespace std;

int factorial(int n);

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;
    int a =factorial(n);

    cout << "Factorial of " << n << " = " << a<<"\n";
    return 0;
}

int factorial(int n)
{
    //if(n > 1)
    //   return n * factorial(n - 1);
    //else
    //   return 1;

    //base_case that make the recursion stop
    if(n==1)  return 1;
    else      return n*factorial(n-1);     //in iterativly way we do factorial of any number as [multiplue one then increment one till reach the number we want it's factoral]
    //but we will do this in the recurrsion concept going from the number down to one


}
