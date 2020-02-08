/******              METHOD 1 (Using temp array)          **************************/

//#include<bits/stdc++.h>
//using namespace std;

//int main() {
//    int Tn,N,D;
//    cin>>Tn;
//    for (int i = 0; i < Tn; ++i) { //T denoting the number of testcases

//        cin>>N>>D; // N denoting the size of the array D denoting the number size of the rotation
//        int arr[N-D];
//        int temparr[D];
//        int mergedArr[N];
//        int Ioriginal=0;

//        for(int i=0 ; i<N ; i++) // read the array from the terminal
//        {
//            if(i<D){
//                scanf("%d",&temparr[i]);
//            }
//                else{
//                scanf("%d",&arr[Ioriginal]);
//               ++Ioriginal;
//            }
//        }
//        Ioriginal=0;
//        /******************************** Merge two arrays **********************/
//    for(int i=0;i<N;i++){
//        if(i>N-D-1){
//            mergedArr[i] = temparr[Ioriginal];
//             ++Ioriginal;

//        }else{
//            mergedArr[i] = arr[i];
//        }
//    }

//    /******  print the output arrays   *****/

//    for(int i=0;i<N;i++){
//        cout<<mergedArr[i]<<' ';
//    }

//    cout<<endl;

//    }
//    return 1;

//}






/*****************************          METHOD 2 (Rotate one by one)                      **********************/


/**

using namespace std;
#include<iostream>

//Time complexity : O(n * d)


void leftRotateByOne(int arr[],int n){

    int temp=arr[0],i;
    for (i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    arr[i]=temp;



}
void leftRotate(int arr[],int d,int n){
    for(int i=0;i<d;i++)
        leftRotateByOne(arr,n);
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

 int main()
{
     int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
         int n = sizeof(arr) / sizeof(arr[0]);

         // Function calling
         leftRotate(arr, 2, n);
         printArray(arr, n);
    return 0;
}




*/


/*****************************         METHOD 3 (A Juggling Algorithm)                     **********************/

 // C++ program to rotate an array by
 // d elements
 #include <bits/stdc++.h>
 using namespace std;

 /*Fuction to get gcd of a and b*/
 int gcd(int a, int b)
 {
    if(b==0) return a;
    else
        return gcd(b,a%b);
 }
 /*Function to left rotate arr[] of siz n by d*/
 void leftRotate(int arr[], int d, int n)
 {
     int G_C_D= gcd(n,d);
     for(int i=0;i<G_C_D;i++){
         int temp=arr[i];
         int j=i;
         while (1) {
              int k = j +d;
             if(k>=n)
                 k=k-n;
             if(k==i)
                 break;

             arr[j]=arr[k];
             j=k;
         }
         arr[j]=temp;
     }

 }

 // Function to print an array
 void printArray(int arr[], int size)

 {
     for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
 }

 /* Driver program to test above functions */
 int main()
 {
     int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
     int n = sizeof(arr) / sizeof(arr[0]);

     // Function calling
     leftRotate(arr, 2, n);
     printArray(arr, n);

     return 0;
 }















