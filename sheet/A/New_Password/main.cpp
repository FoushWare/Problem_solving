
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:23                                                           *
    DATE:8/23/2017                                                         *
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
#include<string>
typedef std::vector<char> vc;
#define pb push_back
int main()
{
    int klengh=0,kunique=0;
    vc v1;
    std::string s1;
   std::cin>>klengh>>kunique;
   if(klengh ==kunique){
       for(int i=0;i<klengh;i++){
           char c=(97+i);
         v1.pb(c);
         std::cout<<v1[i];
       }
       std::cout<<"\n";

   }
   else if(kunique<klengh){
       for(int i=0;i<kunique;i++){
             char c=(97+i);
             v1.pb(c);
       }

       for(int i=0;i<klengh-kunique+1;i++){
            for(int i=0;i<kunique;i++){
                s1 += v1[i];
                if((int)s1.length()>klengh){break;}
                std::cout<<s1[i];
             }

       }

   }




    return 0;
}
/* this is shorcode for other coders int CF
#include <iostream>
using namespace std;

int main() {

    int n,k,x=97,dis=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        if(dis>=k)
        {
            x=97;
            dis=0;
        }
        putchar(x);
        x++;
        dis++;
    }


    return 0;
}


*/

/* Another solution form others
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n / k; ++ i)
        for (int j = 0; j < k; ++ j)
            cout << char('a' + j);
    for (int i = 0; i < n % k; ++ i)
        cout << char('a' + i);
    cout << "\n";

    return 0;
}


*/
