
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:14                                                           *
    DATE:8/14/2017                                                         *
   Author: Ahmed Fouad (Foush)


*************************************************************************/
#include <bits/stdc++.h>
using namespace std;
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
   /* this code fall with hight input
    unsigned int xbulb=0;
    unsigned int count=0;
    vs v1;

   while(std::cin>>xbulb && xbulb !=0){

       for(unsigned int i=2;i<=xbulb;i++)
       {
           if(xbulb%i==0){ ++count;}

       }
        if(count%2==0){v1.pb("yes");}
        else{v1.pb("no");}
        count=0;
}

   tr(v1,i){
       std::cout<<*i<<"\n";
   }
*/




    unsigned int n ;
        while ( cin >> n && n != 0 ) {
            unsigned int sq = ( int ) sqrt( n ) ;
            cout << ( sq * sq == n ? "yes\n" : "no\n" ) ;
        }
        return 0 ;



}
