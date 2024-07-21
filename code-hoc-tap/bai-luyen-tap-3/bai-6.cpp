#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) 
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j) 
    {
        if (s[i] != s[j]) 
            return false;
        i++;
        j--;
    }
    return true;
}

int main() 
{
    string s;
    getline(cin, s);

    if (isPalindrome(s)) 
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}