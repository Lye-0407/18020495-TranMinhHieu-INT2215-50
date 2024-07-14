#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int minA = 1000000;
    int minB = 1000000;
    
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        minA = min(minA, a);
        minB = min(minB, b);
    }
    cout << minA * minB;
    return 0;
}