
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:6                                                           *
    DATE:8/6/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<assert.h>
#include<string>
int pos=0;
std::string s1,t1;


int main()
{
    std::cin>>s1>>t1;
    assert(t1.length()>=1 && t1.length()<=50 && s1.length()>=1&&s1.length()<=50);
    for(int i=0;i<(int)t1.length();i++){
       if(s1[pos]==t1[i]){++pos;}

    }
    std::cout<<pos+1;
    return 0;
}
