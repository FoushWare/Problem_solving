
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:20                                                           *
    DATE:8/20/2017                                                         *
   Author: Ahmed Fouad (Foush)

*************************************************************************/
#include<bits/stdc++.h>

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
//Constants
const int MAX=800;
int main() {

    std::ios_base::sync_with_stdio(false);
    std::string s1, s2;
   /*The program handle 2 inputs at a time*/
    while(std::cin>>s1){
            std::cin>>s2;
            std::reverse(s1.begin(),s1.end());
            std::reverse(s2.begin(),s2.end());
            int Result[MAX];
            std::memset(Result,0,sizeof(Result));
            //multiply the two integer
           for(int i=0;i<(int)s1.length();i++){
               for(int j=0;j<(int)s2.length();j++){
                    //val+=(s1[i]-'0') * (s2[j]-'0');
                   //Result.insert(Result.begin()+i+j,val);
                   Result[i+j]+=(s1[i]-'0')*(s2[j]-'0');
               }
           }
           //propagate the result
           for(int i=0;i<MAX-1;i++){
                Result[i+1] += Result[i] / 10;
                Result[i] %= 10;
           }

           int i=MAX-1;
           while(i>0 &&Result[i]==0)--i;
           for(;i>=0 ;i--)
               std::cout<<Result[i];
           std::cout<<"\n";






    }

    return 0;
}
