
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:20                                                           *
    DATE:8/20/2017                                                         *
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
#include<algorithm>
#include<string>
#include<vector>
typedef std::vector<int> vi;
#define pb push_back
int main()
{
   vi v1;
   std::string s1=" ";
   std::cin>>s1;
   for(int i=0;i<(int)s1.length();i+=2){
       v1.pb(s1[i]-'0');
   }

   std::sort(v1.begin(),v1.end());
   for(int i=0;i<(int)v1.size();i++){
       std::cout<<v1[i];
       if(i != (int)v1.size()-1){
           std::cout<<"+";
       }
   }
    return 0;
    //i can use the algrithm from scratch for loop within for loop
}
