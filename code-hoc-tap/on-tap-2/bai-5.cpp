#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    
    cout << fixed << setprecision(2) << (a + b + c + d + e) / 5;
    return 0;
}