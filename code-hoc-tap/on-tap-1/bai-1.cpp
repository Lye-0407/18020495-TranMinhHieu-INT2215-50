#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        cout << a + b + c << endl;
        if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
            cout << "vuong";
        else if (a == b && b == c)
            cout << "deu";
        else if (a == b || b == c || c == a)
            cout << "can";
        else 
            cout << "thuong";
    }
    else
        cout << "Invalid";
    return 0;
}
    
    