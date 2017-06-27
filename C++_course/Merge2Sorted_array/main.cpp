#include <iostream>
#include<algorithm>
#include<assert.h>
#include <vector>
using namespace std;
void Merge2Sorted_array(int arr1[],int sz1,int arr2[],int sz2,int Result[],int sz3);
void AUTO_TEST_Merge2Sorted();
int main()
{
    /*const int SIZE=5;
    int arr1[SIZE]={1,4,5,8,12};
    int arr2[SIZE]={0,3,17,20,23};
    int Res[SIZE+5]={0};
    Merge2Sorted_array(arr1,SIZE,arr2,SIZE,Res,SIZE+5);*/
AUTO_TEST_Merge2Sorted();
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

//for(int i=0;i<sz3;i++){ cout<<" "<<Result[i];}

}

void AUTO_TEST_Merge2Sorted(){
    const int SIZE=10;
   vector<int> v(10);
  int myarr1[SIZE],myarr2[SIZE],myResult[SIZE*2];
  int arr1[SIZE],arr2[SIZE],Result[SIZE*2];


    for(int test=0;test<1000;test++){
        for(int i=0;i<SIZE;i++){
            arr1[i]=myarr1[i]=rand()%100;
            arr2[i]=myarr2[i]=rand()%200;
        }
        //sort all the arrays
sort(myarr1,myarr1+SIZE);
sort(arr1,arr1+SIZE);

sort(myarr2,myarr2+SIZE);
sort(arr2,arr2+SIZE);

merge(arr1,arr1+SIZE,arr2,arr2+SIZE,v.begin());
Merge2Sorted_array(myarr1,SIZE,myarr2,SIZE,myResult,SIZE*2);

for(int i=0;i<SIZE*2;i++){ assert(myResult[i]==Result[i]);}
    }
cout<<"perfect foush";
}
