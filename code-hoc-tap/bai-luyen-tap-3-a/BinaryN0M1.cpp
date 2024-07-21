#include <iostream>
#include <string>

using namespace std;

void generateBinaryStrings(int n, int m, string str) 
{
    if (n == 0 && m == 0) 
    {
        cout << str << endl;
        return;
    }

    if (n > 0)
        generateBinaryStrings(n - 1, m, str + "0");

    if (m > 0)
        generateBinaryStrings(n, m - 1, str + "1");
}

int main() {
    int n, m;
    cin >> n >> m;

    if (n + m <= 10)
        generateBinaryStrings(n, m, "");
    return 0;
}