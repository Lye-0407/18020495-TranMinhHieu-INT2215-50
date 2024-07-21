#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1, v1, x2, v2;
    double t;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 > 0 && v2 > 0)
    {
        t = (double)(x1 - x2) / (v2 - v1);
        if (t == floor(t) && t > 0)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}