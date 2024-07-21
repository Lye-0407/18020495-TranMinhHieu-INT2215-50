#include<iostream>
using namespace std;
int main()
{
    double a1, b1, c1, a2, b2, c2, D, Dx, Dy;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    D = a1 * b2 - a2 * b1;
    Dx = c1 * b2 - c2 * b1;
    Dy = a1 * c2 - a2 * c1;
    if (D == 0)
        {
            if (Dx + Dy == 0)
                cout << "Vo so nghiem";
            else
                cout << "Vo nghiem";
        }
    else
        cout << "x = " << Dx / D << ", y = " << Dy / D;
    return 0;
}