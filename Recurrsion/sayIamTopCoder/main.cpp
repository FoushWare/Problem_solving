#include <iostream>

using namespace std;
void sayIamTopCoder(int cnt);
int main()
{
    sayIamTopCoder(5);
}

void sayIamTopCoder(int cnt){

    if(cnt < 1)                 //base case that stop the recursion
        return;
    cout<<"I am topCoder\n";     // some Logic
    sayIamTopCoder(cnt-1); //sub_problem  -never go to infinit
}
