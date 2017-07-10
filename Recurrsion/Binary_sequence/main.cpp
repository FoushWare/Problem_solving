#include <iostream>

using namespace std;
//    [***Note****] you can set the default argu only in declartion or defination not in both

void generateBinarySeq(int len,string s="");
int main()
{
    generateBinarySeq(3);
    return 0;
}

void generateBinarySeq(int len,string s){

   //base case
    if(len == 0) {
        cout<<s<<'\n';
        return ;
    }

  //sub_problem
    generateBinarySeq(len-1,s+ "0");
    generateBinarySeq(len-1,s+ "1");


}
