//    Year:2018
//    month: 8
//    DAY:25
//    DATE:8/26/2018
//   Author: Ahmed Fouad (Foush)
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
typedef std::set<char> sc;

typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
//this is for stop sync with input/output in c  to not to overhead and slow the program
//std::ios_base::sync_with_stdio(false);
#include <iostream>
#include<cstring>//for memset
using namespace std;

int main()
{
    int c;char ch;
    char data[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    sc s2;
    sc s1(data,data+sizeof(data)/sizeof(data[0]));
   cin>>c;
   while ((getchar()) != '\n');
   for(int i = 0; i <c; i++) {
           ch=getchar();
           s2.insert(tolower(ch));
   }

   if(s1==s2){
       cout<<"YES";
   }else{
       cout<<"NO";
   }





}
