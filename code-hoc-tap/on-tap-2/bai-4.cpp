#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    double x;
    double minX = 999999999;
    double maxX = -999999999;
    
    for (int i = 1; i <= n; i++ )
    {
        cin >> x;
        minX = min(minX, x);
        maxX = max(maxX, x);
    }
    cout << maxX << endl;
    cout << minX;
    return 0;
}