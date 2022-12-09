//Simon Chewaka
#include<iostream>
using namespace std;

bool palindrome_true(string s)
{
    if (s.length() <= 1)
    {
        return true;
    }

    if (s[0] == s[s.length() - 1])
    {
        return palindrome_true(s.substr(1, s.length() - 2));
    }
    return false;
}

int main()
{
    //inputs check if it is palindrome
    string a = "level";
    string b = "gold";
    //checks a input first
    if (palindrome_true(a))
    {
        cout << a << " is palindrome" << endl;
    }
    else
    {
        cout << a << " is not a palindrome" << endl;
    }
    //checking b if it is a palindrome
    if (palindrome_true(b))
    {
        cout << b << " is palindrome" << endl;
    }
    else
    {
        cout << b << " is not a palindrome" << endl;
    }
}
