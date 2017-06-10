#include <iostream>
using namespace std;

bool is_palindrome(int start, int end, const string & str);
int main()
{
    cout<<"enter the text for test plaindrom";
}
bool is_palindrome(int start, int end, const string & str)
{
    if (str[start] != str[end])
        return false;
    else if (start == end)
        return true;
    else
        return is_palindrome(++start, --end, str);

    return false;
}
