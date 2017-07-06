#include <iostream>

using namespace std;

void PrintNumber(int Num);
int main()
{
    PrintNumber(214);
}
                                                         /*
                                                            if we have number like 214
                                                                      214/10 = 21
                                                                      214%10 = 3
                                                                                            */
void PrintNumber(int Num){

 if(Num){
   PrintNumber(Num /10);
   cout<<Num%10;
 }

cout<<'\n';
}
