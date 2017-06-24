#include <iostream>
#include<algorithm>
#include<assert.h>
using namespace std;
void insertion_sort(int arr[],int size); //the insertion_sort algorithm
void test_insertion(void);
int main()
{
    /*
    const int SIZE=10;
    int arr[SIZE]={10,8,3,2,5,7,1,13,4,6};
    insertion_sort(arr,SIZE);*/
    test_insertion();
}

void insertion_sort(int arr[],int size){
    //we assume that the first element is already sorted
    for(int i=1;i<size;i++){
        //make copy of the element we want to compare
        int cpy=arr[i];
        int j=i-1;

        for(;j>=0;j--){
            if(arr[j]<cpy) break;
            arr[j+1]=arr[j];
        }
        arr[j+1]=cpy;
    }
    /*
    //printing the sorted array
    for(int i=0;i<size;i++) cout<<" "<<arr[i];*/
}//End of insetion_sort()

void test_insertion(void){
   const int SIZE=3;
   int arr[SIZE],cpy[SIZE],tmp[SIZE];

  for(int test=0;test<1000;test++){

     for(int i=0;i<SIZE;i++){arr[i]=cpy[i]=tmp[i]=rand()%100;}

     sort(cpy,cpy+SIZE);
     insertion_sort(arr,SIZE);

     bool passed=true;

     for(int k=0;k<SIZE;k++){  passed &= (cpy[k]==arr[k]);}

     if(!passed){
     for(int z=0;z<SIZE;z++)
         cout<<tmp[z]<<' '<<flush;
         assert(false);

     }
  }//End of the for loop of test

     cout<<"perfect foush";
}//End of test_insertion()
