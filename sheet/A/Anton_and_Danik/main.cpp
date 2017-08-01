
/*************************************************************************
    Year:2017                                                         *
    month: 8                                                      *
    DAY:1                                                           *
    DATE:8/1/2017                                                         *
   Author: Ahmed Fouad (Foush)                                          *
*************************************************************************/
#include <iostream>
#include<vector>
#include<string>
#include<assert.h>

std::vector<char> s;
std::vector<char>::iterator it;

int Danik=0,Anton=0,Friendship=0,gameNum=0;
std::string ResultGame;


int main()
{
   std::cin>>gameNum;

   assert(gameNum >=1 && gameNum <= 100000);

  std::cin>>ResultGame;

 for(int i=0;i<int(ResultGame.length());i++){

  s.push_back(ResultGame[i]);
 }


  for(it=s.begin();it !=s.end();it++){
      if(*it == 'A') ++Anton;
      else if(*it == 'D') ++Danik;
      else{}
  }


 if(Danik == Anton) std::cout<<"Friendship";
 else if(Danik > Anton) std::cout<<"Danik";
 else{
     std::cout<<"Anton";

}






    return 0;
}

/* the editorial code
 * Let ka will be amount of characters "A" in the string and kd will be
 *  amount of characters "D" in the string. Then, if ka > kd, we print "Anton".
 *  If ka < kd, we print "Danik". If ka = kd, we print "Friendship".

Time complexity is .
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k_a = 0, k_d = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == 'A') k_a++; else k_d++;
    if (k_a > k_d) cout << "Anton" << endl;
    if (k_a < k_d) cout << "Danik" << endl;
    if (k_a == k_d) cout << "Friendship" << endl;
    return 0;
}
*/
