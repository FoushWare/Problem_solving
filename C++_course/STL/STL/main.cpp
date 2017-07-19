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

auto i=0;
int size;
int a;
int pos1,pos2;
int queryNum;
int num;
int mark=0;
std::string student;
map< string,int> M;

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



/*Third problem of hackerRank   lower_bound

int main(void){
    // Enter your code here. Read input from STDIN. Print output to STDOUT

         //cout<<"enter the number of the elements\n";
       cin>>size;

       vector<int> v1;
        vector<int> Q1; // to not dublicate the query

       //filling the vector with numbers
      while((int)v1.size() != size){
          cin>>a;
          v1.push_back(a);
      }

      sort(v1.begin(),v1.end());

      //get the query to found the number in the vector or not

      vector<int>::iterator it ;

        //Enter the number of queries
        cin>>queryNum;

        for(int i=0;i < queryNum;i++){

            cin>>a;
            //if the query dulbicated ignore it
          if( find(Q1.begin(),Q1.end(),a) == Q1.end() ){
          Q1.push_back(a);
          }
          else{
              continue;
          }
               it=lower_bound(v1.begin(),v1.end(),a);           // get pointer to the value or the value greater than it

        // i used  find  cause lower_bound() always don't go to end
        //it get point to the requierd value or
        //the value great than it

        if(find(v1.begin(),v1.end(),a)!= v1.end()){

         if(it !=v1.end()){cout<<"Yes "<<std::distance(v1.begin(),it)+1<<endl;}
    }
        else{
           cout<<"NO "<<std::distance(v1.begin(),it)+1<<endl;
        }


        }//End of the for loop for quires



        return 0;

}


*/


/*fourth problem in hackerRank sets_stl
 *
int main() {

    cin>>queryNum;


        for(int i=0;i<queryNum;i++){

            cin>>y >>x;
                if(y == 1){ s.insert(x);}
                else if(y == 2){if( s.find(x) != s.end() )  s.erase(x); else{};}

                else if(y==3){
                    if( s.find(x) != s.end() )  cout<<"Yes\n";
                    else cout<<"No\n";

                }

    }



}
*/

