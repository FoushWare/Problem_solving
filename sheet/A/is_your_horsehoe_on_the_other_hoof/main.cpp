
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:6                                                           *
    DATE:8/6/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<vector>

//std::vector<int> vi;
//int k0=0,k1=0,k2=0,k3=0;
int k0=0;
int main()
{
int count=0;
std::vector<int> vi;
    for(int i=0;i<4;i++){
        std::cin>>k0;
    vi.push_back(k0);
    }


   for(int i=0;i<3;i++){
       for(int j=i+1;j<4;j++){
           if(vi[i] == vi[j]){

               ++count;
           break;
           }
       }
   }

   std::cout<<count;
    return 0;
}
