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

int main()
{
    int a, b;
    cin >> a >> b;
    
    int Tuso = abs(a) / gcd(abs(a),abs(b));
    int Mauso = abs(b) / gcd(abs(a),abs(b));
    
    if (((a > 0) && (b < 0)) || ((a < 0) && (b > 0))) /// if(a * b < 0)
    {
        if (Mauso == 1) 
            cout << '-' << Tuso;
        else 
            cout << '-' << Tuso << '/' << Mauso;
    }
    else
    {
        if (Mauso == 1) 
            cout << Tuso;
        else 
            cout << Tuso << '/' << Mauso;
    }
    return 0;
}