#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Hàm kiểm tra xem một số có phải là số đối gương hay không
bool isPalindrome(int n) 
{
    string s = to_string(n);
    int len = s.size();
    for (int i = 0; i < len / 2; i++) 
    {
        if (s[i] != s[len - 1 - i]) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int T;
    cin >> T;

    vector<int> results;

    for (int t = 0; t < T; ++t) 
    {
        int A, B;
        cin >> A >> B;

        int count = 0;
        for (int i = A; i <= B; ++i) 
        {
            if (isPalindrome(i)) 
                ++count;
        }
        results.push_back(count);
    }

    for (int i = 0; i < T; ++i)
        cout << results[i] << endl;

    return 0;
}