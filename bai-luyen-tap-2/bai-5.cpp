#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b)
{

    if (a == 0 || b == 0)
        return a + b;
        
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

int lcm(int a, int b)
{
    if ((a == 0) || (b == 0))
        return 0;
    else
        return a * b / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    a = abs(a);
    b = abs(b);
    
    cout << lcm(a, b);
    return 0;
}