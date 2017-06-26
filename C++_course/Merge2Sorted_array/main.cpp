#include <iostream>
using namespace std;
void Merge2Sorted_array(int arr1[],int sz1,int arr2[],int sz2,int Result[],int sz3);
int main()
{
    const int SIZE=5;
    int arr1[SIZE]={1,4,5,8,12};
    int arr2[SIZE]={0,3,17,20,23};
    int Res[SIZE+5]={0};
    Merge2Sorted_array(arr1,SIZE,arr2,SIZE,Res,SIZE+5);

}
void Merge2Sorted_array(int arr1[],int sz1,int arr2[],int sz2,int Result[],int sz3){

   /*make three pointers one for the first array
   **second for the second array
   **thrid for the Result array*/
   //initalize the pointer of the array
int idx1=0;
int idx2=0;
int Res=0;
while(idx1<sz1 && idx2<sz2){

    if(arr1[idx1]<arr2[idx2]){ Result[Res++]=arr1[idx1++];}
    else Result[Res++]=arr2[idx2++];
}
while(idx1<sz1){
    Result[Res++]=arr1[idx1++];
}
while(idx2<sz2){
    Result[Res++]=arr2[idx2++];
}

for(int i=0;i<sz3;i++){ cout<<" "<<Result[i];}

}
