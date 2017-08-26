
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:26                                                           *
    DATE:8/26/2017                                                         *
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
#include <iostream>
#include<cstring>//for memset

const int MAX=100;
int main()
{
    int n=0;  std::cin>>n;
    int arr[MAX+1];
    int temp=0;
    std::memset(arr,0,sizeof(arr));//inintalize array of zeroes
    for(int i=1;i<=n;i++){
        std::cin>>temp;
        arr[temp]=i;
    }
    for(int i=1;i<=n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}
