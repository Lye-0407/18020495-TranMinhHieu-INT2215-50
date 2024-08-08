// Viết chương trình nhân một số nguyên lớn được biểu diễn bằng string. với một số nguyên nhỏ hơn 10

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string multiply(const string& largeNumber, int smallNumber)
{
    if (smallNumber < 0 || smallNumber > 10)
        throw invalid_argument("Error Input");

    int carry = 0;
    string result;

    for (int i = largeNumber.size() - 1; i >= 0; --i)
    {
        if (!isdigit(largeNumber[i]))
            throw invalid_argument("Error Input");
        
        int digit = largeNumber[i] - '0';
        int product = digit * smallNumber + carry;
        carry = product / 10;

        result.push_back((product % 10) + '0');
    }

    if (carry > 0) result.push_back(carry + '0');

    reverse(result.begin(), result.end());

    while (result.size() > 1 && result[0] == '0') result.erase(result.begin());

    return result;
}

int main()
{
    string largeNumber;
    int smallNumber;

    cin >> largeNumber >> smallNumber;

    try
    {
        string result = multiply(largeNumber, smallNumber);
        cout << result << endl;
    }
    catch(const invalid_argument& e)
    {
        cout << "Error" << e.what() << endl;
    }
    
    return 0;
}