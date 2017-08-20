
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:13                                                           *
    DATE:8/13/2017                                                         *
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
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
typedef std::vector<std::string> vs;



int main()
{
    int x=0,k_length=0;
    std::string str="";
   std::cin>>x;
   std::string s;
   vs v1;
   while(x>0){
    std::cin>>s;
     v1.pb(s);
      --x;
   }
   tr(v1,i){
       k_length=sz(*i);
       if(k_length > 10){
            str +=i[0][0];
            str += ""+std::to_string(k_length-2);
            str +=i[0][k_length-1];
            std::cout<<str<<'\n';
            str="";
       }else{
           std::cout<<*i<<"\n";
       }
   }










    return 0;
}
