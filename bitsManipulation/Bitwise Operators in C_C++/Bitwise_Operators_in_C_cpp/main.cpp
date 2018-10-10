#include <iostream>

using namespace std;


int findOdd(int arr[],int n){
    int res=0,i;
    for(i=0;i<n;i++){
        res ^=arr[i];
    }
    return res;
}



int main()
{
    /** Basic operations of bitwise in c/c++
     *
    unsigned char a = 5 , b = 9 ; // a = 5(00000101), b = 9(00001001)
    printf("a = %d , b= %d\n",a,b);
    printf("a&b = %d\n",a&b);// The result is 00000001
    printf("a|b = %d\n",a|b);
    printf("~a = %d\n", a = ~a);   // The result is 11111010
    printf("b<<1 = %d\n", b<<1);  // The result is 00010010
    printf("b>>1 = %d\n", b>>1);  // The result is 00000100
    */


/*The bitwise XOR operator is the most useful operator from technical interview perspective.
    It is used in many problems. A simple example could be
“Given a set of numbers where all elements occur even number of times except one number,
 find the odd occurring number” This problem can be efficiently solved by just doing XOR of all numbers
*/

    /*the idea is when xor two number => the new number gotten from the
    previous calculation if xoR ed with one of the previous operation it will give the other number
    i.e(       14 ^ 90 = 84  , 84 ^ 14 =90       )
*/

    int arr[]={90,12,12,14,14,14,14};
    int n=sizeof (arr)/sizeof (arr[0]);
    printf("the Odd occuring element is %d ",findOdd(arr,n));




    return 0;
}
