#include <iostream>
#include<vector>

/*** use some Macros  to speed my_typing

## sz() to get the size of the contianer

*NOTE=> continer.size() the size is unsigined
* and it will make problem sometime with signed
* numbers like -1 i.e(in condition s.size-1) it
* will give us a problem

## typedef :=> with it i can name type with
my own name  i.e( typedef int foush)

* i'm using it to minimize the typing style

##pb to push element int the end of the container

*/

typedef vector<int> vi;
typedef vector < vi > vvi;
#define sz(a) int((a).size())
#define pb push_back
#define all(v)  (v).begin(),(v).end()


/*as all algorithms , functors and STL
are defined not in global namespace but in
std name space


*/
using namespace std;

const int MAX=100;
int in[MAX];
vector <int> v1 ={1,2,4};

void PrintLine(string sub=" " );
void printVec(vector <int>&v2, string s);


int main()
{
    //PrintLine();
    printVec(v1,"foush");
}
void PrintLine(string sub){
    for(int i=0;i<50;++i){
        cout<<"*";
    }
    cout<<sub;

   for(int i=0;i<50;++i){
       cout<<"*";
   }
   cout<<"\n";


}
/*i've used the reference with vector cause
when passing vector to array a copy of vector
is acually created and this consume memory and
time
but   ... with reference we acutally pass pointer
to the vector to the array

**NOTE
** if i wanted to just read the vector passed
** i'll type const before
** i.e( const vector<int> &v2 )



*/

void printVec(vector <int>&v2, string s=" "){

   cout<<s<<'\t';
  for(int i=0;i< (int)v2.size();i++)
      cout<< v2[i] <<" ";

       cout<<'\n';

}
/* HackerRank first problem URL:https://www.hackerrank.com/challenges/vector-sort/problem
 *
 *
#include <cmath>
#include <cstdio>
#include <vector>
#include<iterator>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector<int> vi;

auto i=0;
int size;
int a;
#define all(v)  v.begin(),v.end()
#define sz(a) int((a).size())
#define pb   push_back
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)

int main() {

cout<<"enter number of element of the vector";
cin>>size;

vi v1; //make vector and assign it's element with zeros

while(sz(v1)!= size)
{
        cin>>a;
        v1.pb(a);
}

        sort(all(v1));
tr(v1,i)
cout<<*i<<' ';



}

*/
/* second problem of hackerRank but here i'm adding some cout to make my_solution visual
int main(){
    vi v2;//empty vector

  cout<<"Enter the size of the vector";
  cin>>size;
  cout<<"the size of the vector that will be entered"<<'\t'<<size<<'\n';

  while(sz(v2) !=size){
       cin>>a;
       v2.pb(a);
}

 cout<<"the entered array"<<'\n';
   tr(v2,i){
       cout<<*i<<" ";
   }
   cout<<"\n";

cout<<"enter the postion you want to earse";
cin>>pos1;

v2.erase(v2.begin()+pos1-1);


//print the vetctor after erase the second element
  tr(v2,i){
       cout<<*i<<" ";
   }

cout<<"enter the range to earse";
cin>>pos1>>pos2;

v2.erase(v2.begin()+pos1-1,v2.begin()+pos2-1);

cout<<"The size of the vector after last erase : "<< sz(v2)<<'\n';
cout<<"the last vector is : \n";
  tr(v2,i){
       cout<<*i<<" ";
   }

 cout<<'\n';


return 0;
}
*/










