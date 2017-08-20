
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
#include<vector>
#include<algorithm>
typedef std::vector<int>vi;
#define pb push_back

int main()
{
    int k_child=0; std::cin>>k_child;
    int ks=0,k1=0,k2=0,k3=0,kt=0,kt1=0;

    vi vindex;//need index form him
    vi v1;//for 1
    vi v2;//for 2
    vi v3;//for 3
    for(int i=0;i<k_child;i++){
        std::cin>>ks;
        vindex.pb(ks);
    }

   for(int i=0;i<(int)vindex.size();i++){
       if(vindex[i]==1){
           ++k1;
           v1.pb(i+1);

       }
       else if(vindex[i]==2){

           ++k2;
           v2.pb(i+1);
       }
       else{

           ++k3;
           v3.pb(i+1);
       }
   }

if((k1==k2)&& (k1==k3)){kt=k1;}
if((k1!=k2) || (k1!=k3)||(k2!=k3)){
    kt1=std::min(k1,k2);
    kt=std::min(kt1,k3);
    if(kt==0){
        std::cout<<kt<<"\n";//number of teams
        return 0;
    }
}

std::cout<<kt<<"\n";//number of teams

for(int i=0;i<kt;i++){
    std::cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
}




    return 0;
}
