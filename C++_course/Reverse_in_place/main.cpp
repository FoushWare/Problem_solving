#include <iostream>
#include<algorithm> //for reverse function
#include<assert.h>// for assert function

using namespace std;
void Reverse_in_place(int arr[],int size); // to reverse array that given
void printArray(int arr[],int size); //to print the given array
void Test_ReversEInPlace(); //to make automatic testing for reverseinpace function
int main()
{
/*    const int SIZE=10;
    int arr[SIZE]={2,8,6,4,5,7,3,10,12,13};
    cout<<"the original arry"<<endl;
    printArray(arr,SIZE);
    Reverse_in_place(arr,SIZE);
    cout<<"reversed arry"<<endl;
    printArray(arr,SIZE);*/
    Test_ReversEInPlace();

}
void Reverse_in_place(int arr[],int size){
    /**use size-1 to get to the indexing of the array from the ending then
     ** use i to traver it from the ending
      **/
    for (int i=0;i<size/2;i++){swap(arr[i],arr[size-1-i]);}
}

void printArray(int arr[], int size){
    for (int i=0;i<size;i++){cout<<arr[i]<<" ";}
    cout<<"\n";
}

void Test_ReversEInPlace(){
   int used_Size=7; //i use it instead of size cause i want to test odd and even array
   int arr[used_Size],cpy[used_Size];
  for(int k=0;k<2;k++){
      //start the 1000 random test
      for (int test=0;test<1000;test++){
          //fill up the array with random number
          for(int j=0;j<used_Size;j++){cpy[j]=arr[j]=rand()%100;}
          Reverse_in_place(arr,used_Size);
          reverse(cpy,cpy+used_Size);
         for(int z=0;z<used_Size;z++){assert(cpy[z]==arr[z]);}
      }
      used_Size--;
  }
  cout<<"Perfect foush"<<endl;

}
