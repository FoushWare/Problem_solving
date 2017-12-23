
/*************************************************************************
    Year:2017                                                         *
    month: 11                                                      *
    DAY:20                                                           *
    DATE:23/11/2017                                                         *
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


    int static x=0;
    int k_n=0;
    std::string k_op;

    std::cin>>k_n;

    for(int i=0;i<k_n;i++){

        std::cin>>k_op;

        if(!k_op.compare("++X")||!k_op.compare("X++")){
            x+=1;
        }
        if(!k_op.compare("--X")||!k_op.compare("X--")){

            x-=1;
        }


    }
    std::cout<<x;

    return 0;
}
