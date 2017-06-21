#include <iostream>
#include<assert.h> //for assert function
#include<algorithm> //for sort function
using namespace std;
int get2Max(int arr[],int size);  //To return the secondMax
void Test_secondMax();//To test the function i created [get2Max]
int main()
{
    /*
    const int SIZE=10;
    int array[SIZE]={2,1,8,5,9,4,7,6,10,3};
    int secondMax=get2Max(array,SIZE);
    cout<<"the second max is "<<secondMax<<endl;*/
    Test_secondMax();
}
//the get2Max function that will return the 2'd max number

int get2Max(int arr[], int size){
    //this will allow the flow of the program if the minium size of element is passed
    assert(size>=2);
    //this is my assumption
    int firstMax=arr[0];
    int secondMax=arr[1];
    //if my assumption is not correct for the first time i will swap them
    if(secondMax>firstMax){swap(firstMax,secondMax);}
    //travers every element in the array and check
    //First:
   /** if the selected element great than firstMax then the secondMax get the
    ** valuse of firstMax and the firstMax become the current selected element
    **/
   for(int i=2;i<size;i++){ // we will start from the third element

      if(arr[i]>firstMax){secondMax=firstMax; firstMax=arr[i];}
      else if(arr[i]>secondMax){secondMax=arr[i];}
      else ;
   }
   return secondMax;

}
//Test_secondMax function
void Test_secondMax(){
    const int SIZE=10;
    int arr[SIZE];
    //make 1000 random test
    for (int test=0;test<1000;test++){
        for(int i=0;i<SIZE;i++){//fill the array with random number
           arr[i]=rand()%100;
        }
        int myAnswer=get2Max(arr,SIZE);
        /**sort the array to get the secondMax it will be the second element
         * in the end of the sorted array assending order
          */
        sort(arr,arr+SIZE);
        assert(myAnswer==arr[SIZE-2]);

    }
    cout<<"perfect"<<endl;
}
