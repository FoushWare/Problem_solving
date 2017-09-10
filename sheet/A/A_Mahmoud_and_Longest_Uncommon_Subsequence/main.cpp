/*************************************************************************
    Year:2017                                                         *
    month: 9                                                      *
    DAY:10                                                           *
    DATE:9/10/2017                                                         *
   Author: Ahmed Fouad (Foush)
*************************************************************************/
#include <bits/stdc++.h>
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::string s1="", s2="",strsub1="", strsub2="";
    std::cin>>s1>>s2;
   for(int i=0;i<(int)s1.length();i++){
            strsub1 +=s1[i];
}
    for(int i=0;i<(int)s2.length();i++){
            strsub2 +=s2[i];
}
    if(strsub1 == strsub2) std::cout<<-1;
    else {
        std::cout<<std::max(strsub1.length(),strsub2.length());
    }
    return 0;
}
/*
 * short code from other my code i long cause at first i think
 * abcd (AC)  and aaaabbbb not accepted
 *
ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    int l1,l2,k1,k2;
    cin>>a>>b;
    if(a==b)
    cout<<-1<<"\n";
    else
    {
        k1=max(a.length(),b.length());
    cout<<k1<<"\n";
    }


*/
