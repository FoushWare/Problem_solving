#include <iostream>
#include<algorithm>

using namespace std;

int slidingWindow(int arr[],int size,int k);
int slidingWindow_brute_force_algrithm(int arr[],int size,int k);
int main()
{
    const int SIZE=10;
    int arr[SIZE]={1,2,3,4,5,6,7,8,9,10};
    int max=slidingWindow(arr,SIZE,3);
    cout<<" \n the max window is \n"<<max<<endl;

}
//this is the intitive algrithm that need O(nk)
int slidingWindow_brute_force_algrithm(int arr[],int size,int k){
    int max=0,sum;
   for(int i=0;i<size-k+1;i++){         //O(nK)
    sum=0;
       for(int win=0;win<k;win++){ sum+=arr[i+win];}
       if(i==0 || sum>max) {max=sum;}

   }
   return max;


}

//this algrithm with some observation   faster need O(n+k)
int slidingWindow(int arr[],int size,int k){

   int maxWindow=0,sum=0;

   //get the sum of the first k element            O(k)
   for(int win=0;win<k;win++){sum+=arr[win];}
   maxWindow=sum;
   for(int i=1;i<size-k+1;i++){               //o(n)
       sum=sum-arr[i-1]+arr[i+k-1];
       maxWindow=max(maxWindow,sum);
   }

   return maxWindow;

}
