
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:24                                                           *
    DATE:8/24/2017                                                         *
   Author: Ahmed Fouad (Foush)


#include <bits/stdc++.h>

//macro//
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define ll long long int
#define ld long double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
//this is for stop sync with input/output in c  to not to overhead and slow the program
std::ios_base::sync_with_stdio(false);
*************************************************************************/
/* This is my solution it fail in some test cases i don't know why :) but
 * i'll figure it out  later
 */

#include <iostream>
#include<vector>
#include<iomanip>
typedef std::vector<int> vi;

long long  factorial( long long  n);
long long   product=1;
int main()
{

   int step=0,Mod=0;

   while(std::cin>>step){
       std::cin>>Mod;
   vi v1(Mod,0);

for(int i=0;i<Mod-1;i++){
    v1[i+1]=(v1[i] +step)%Mod;
}

for(int i=1;i<Mod;i++){
    product *=v1[i];

}

//check if the output of the formula equal to factorial
if(product==factorial(Mod-1)|| Mod==1){
std::cout<<std::setw(10)<<step<<std::setw(10)<<Mod<<"     "<<"Good Choice"<<"\n";

}
else{
std::cout<<std::setw(10)<<step<<std::setw(10)<<Mod<<"     "<<"Bad Choice"<<"\n\n";
}
   }
    return 0;
}
//factoral function
long long  factorial(long long  n){
    return (n==0 || n==1)?1:n*factorial(n-1);

}



