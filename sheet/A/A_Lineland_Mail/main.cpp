
/*************************************************************************
    Year:2017                                                         *
    month: 9                                                      *
    DAY:10                                                           *
    DATE:9/10/2017                                                         *
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
    vi v1;
    ll nCity=0,xi=0,dmin=0,dmax=0,dminF=0,dminB,dmaxFinal=0,dmaxBegin=0;
   std::cin>>nCity;
   for(int i=0;i<nCity;i++){
       std::cin.ignore();
       std::cin>>xi;
       v1.pb(xi);

   }

   for(int i=0;i<nCity;i++){
       //first element
      if(i==0){
          dmin=std::abs(v1[i+1]-v1[i]);
          dmax=std::abs(v1[(int)v1.size()-1]-v1[i]);
          std::cout<<dmin<<" "<<dmax<<"\n";
      }

       //last element
     else if(i==(int)v1.size()-1){
         dmin=std::abs(v1[i-1]-v1[i]);
         dmax=std::abs(v1[0]-v1[i]);
          std::cout<<dmin<<" "<<dmax<<"\n";
     }

     else{
          dminF=std::abs(v1[i+1]-v1[i]);
          dminB=std::abs(v1[i-1]-v1[i]);
          dmin=std::min(dminF,dminB);
          //dmax=v1[(int)v1.size()-1]-v1[i];
          //dmax=dmax-dmin;
          dmaxFinal=std::abs(v1[(int)v1.size()-1]-v1[i]);
          dmaxBegin= std::abs(v1[0]-v1[i]);
          dmax=std::max(dmaxFinal,dmaxBegin);
          std::cout<<dmin<<" "<<dmax<<"\n";
     }



   }


    return 0;



   /* shorter code of me

std::ios_base::sync_with_stdio(false);
    vi v1;
    ll nCity=0,xi=0,dmin=0,dmax=0,dminF=0,dminB,dmaxFinal=0,dmaxBegin=0;
   std::cin>>nCity;
   for(int i=0;i<nCity;i++){
       std::cin.ignore();
       std::cin>>xi;
       v1.pb(xi);

   }
   for(int i=0;i<nCity;i++){
      if(i==0)
std::cout<<std::abs(v1[i+1]-v1[i])<<" "<<std::abs(v1[(int)v1.size()-1]-v1[i])<<"\n";
     else if(i==(int)v1.size()-1)
 std::cout<<std::abs(v1[i-1]-v1[i])<<" "<<std::abs(v1[0]-v1[i])<<"\n";
     else{
          dmin=std::min(std::abs(v1[i-1]-v1[i]),std::abs(v1[i-1]-v1[i]));
          dmax=std::max(std::abs(v1[(int)v1.size()-1]-v1[i]),std::abs(v1[0]-v1[i]));
          std::cout<<dmin<<" "<<dmax<<"\n";
          }
   }

*/


}
