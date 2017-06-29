#include <iostream>
#include<string.h>

#include<assert.h>
    int pureLength;
using namespace std;
int* convertToINT(string so);
int main()
{
    string s0;
 cin>>s0;
 //Test for wrong input
assert(s0.length()>=2);
int* integer=convertToINT(s0);

for(int i=0;i<pureLength;i++){cout<<integer[i];}

}

int* convertToINT(string so){
    int count=0;

   int stringLength=so.length();
   for(int i=0;i<stringLength;i++){ if(so[i]== 0) ++count; else break;}
  pureLength=stringLength - count;//without zero in the begining
 int arr[pureLength]={0};
for(int k=count;k<pureLength;k++){
    for(int j=0;j<pureLength;j++){arr[j]=so[k];}
}
return arr;
}
