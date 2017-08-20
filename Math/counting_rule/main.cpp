
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:8                                                           *
    DATE:8/8/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
/*
* combinatorics: counting principles
* inclusion and exclusion
*
*
*
*/

/* problem:How many integers in {1,2,..,} are
*divisble by 2,3,5,7?
*
*
*/


#include <iostream>


int main()
{

   /*brute force approach
    *
    *

    int n=100;
    int cnt1=0;
    for(int i=1;i<=n;i++){
        if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
            ++cnt1;
    }
//n steps to compute the answer
    std::cout<<cnt1<<"\n";


*/

int cnt2=0;//inclusion-Exclusion approach
int elementsCnt=0;
int n=100;
int sign=1;
for(int i2=0;i2<2;i2++){
    for(int i3=0;i3<2;i3++){
        for(int i5=0;i5<2;i5++){
        for(int i7=0;i7<2;i7++){
            int d=1; elementsCnt=0;

            if(i2)  d *=2, ++elementsCnt;
            if(i3)  d *=3, ++elementsCnt;
            if(i5)  d *=5, ++elementsCnt;
            if(i7)  d *=7, ++elementsCnt;

            if(elementsCnt==0) //the first rep
                continue;

              sign =elementsCnt %2 ==1? 1:-1;
             cnt2 +=sign* n/d;



        }
    }
}
}



std::cout<<cnt2<<"\n";
//the recursion method will be at night as now i'm tired


    return 0;
}
