/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:20                                                           *
    DATE:8/20/2017                                                         *
   Author: Ahmed Fouad (Foush)

*************************************************************************/

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
int main()
{
std::ios_base::sync_with_stdio(false);
//variables
int k_kids=0,k_n=0,k_packs=0,k_num=0;
long long int  k_total=0;
char k_sign=' ';
std::cin>>k_n>>k_packs;
k_total=k_packs;
vc v1;//sign
vi v2;//packs
for(int i=0;i<k_n;i++){
    std::cin>>k_sign;
    v1.pb(k_sign);
    std::cin>>k_num;
    v2.pb(k_num);
}
for(int i=0;i<k_n;i++){
    if(v1[i]=='+'){
        k_total += v2[i];
    }
    if(v1[i]=='-'){
        k_total -= v2[i];
        if(k_total <0){++k_kids; k_total+=v2[i];}
    }
}
std::cout<<k_total<<' '<<k_kids;
    return 0;
}
/* short code for it
#include<iostream>
using namespace std;
main(){char c;__int64 n,k,q,l=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>c>>q;
        if(c=='+')k+=q;
        else
        if(k>=q)k-=q;else l++;
    }
    cout<<k<<' '<<l;
}
*/
