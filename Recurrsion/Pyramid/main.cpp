#include <iostream>

  /*
                         *
                        **
                       ***
                      ****
                     *****
                    ******
 */



using namespace std;
void pyramid(int n);
void Reverse_pyramid(int n);
int main()
{
    int n;
    cout<<"enter the height of the pyramid"<<'\n';
    cin>>n;
    pyramid(n);

    cout<<"enter the height of the Reverse_pyramid"<<'\n';
    cin>>n;
    Reverse_pyramid(n);
}


void pyramid(int n){
     if(n==0) return ;//base case
     pyramid(n-1);      //sub_problem
    for(int i=0;i<n;i++) cout<<"*";
    cout<<"\n";
}
void Reverse_pyramid(int n){
     if(n==0) return ;//base case
    for(int i=0;i<n;i++) cout<<"*";
    cout<<"\n";
     Reverse_pyramid(n-1);      //sub_problem
}
