
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:13                                                           *
    DATE:8/13/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <bits/stdc++.h>

/*macro*/
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
/*typedef*/
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
/**/
int main()
{
    char x=' ';
    int distinct=0;
    vc v1; std::cin>>x;

    if(x =='{'){
        while(std::cin>>x && x!='}'){
            if(std::find(v1.begin(),v1.end(),x) == v1.end() && x !=','){
               v1.pb(x);
               ++distinct;
            }
}

}
    std::cout<<distinct;
/* another solution
 * is to use set instead of vector cause set doesn't allow dublicates
 *
 *the solution is:

 set<char> s;
 while(cin>>x){
  if(isalpha(x)){
     s.insert(x)
  }
  s.size();

}



*/



    return 0;
}
