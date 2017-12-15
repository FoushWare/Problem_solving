
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

    /*My code */

bool static found=false;
std::string k_i="",k_D="";
std::cin>>k_i;
int k_length=k_i.length();

for(int i=0;i<k_length;i++){
    if(i==0){k_D.push_back(k_i[i]);}
    int current_size=(int)k_D.size();
    found=false;
if(i != 0) {
        for(int k=0;k<current_size;k++)
            if(k_i[i]==k_D[k]){found=true;}

        if(found==false)k_D.push_back(k_i[i]);

    }
}
int k_size=k_D.size();
if(k_size%2==0)
    std::cout<<"CHAT WITH HER!";
else
    std::cout<<"IGNORE HIM!";

    return 0;
}







/*================================================================

/*Top Rated code to lean from*/

/*=================================================================*/

#include <bits/stdc++.h>
using namespace std;

#define boost ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

typedef long long int ll;
typedef long double ld;
typedef complex<double> cd;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<pll, ll> tll;

typedef vector<cd> vcd;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<tll> vtll;
typedef vector<vll> vvll;

typedef deque<ll> dll;

const ll mod = 1000000007;






// ----------------------------------------------------



// ----------------------------------------------------

void func() {
    set<char> s;
    char c;
    while (cin >> c) {
        s.insert(c);
    }
    if (s.size()&1 /*And with the bits of the size :)*/ ) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
}

int main() {
    boost;
    ll t; t = 1;
    while(t--) {
        func();
    }
}















