#include <iostream>
#include <vector>

using namespace std;

// tran -> phai, tren -> duoi, phai -> trai, duoi -> tren
vector<int> drow = {0, +1, 0, -1};
vector<int> dcol = {+1, 0, -1, 0};

int m, n;

int main()
{
    cin >> m >> n;

    int a[m][n];

    for (int = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = -1;

    int irow = 0; icol = 0, recentValue = 1;

    for (int i = 0; i < m * n; i++)
    {
        a[irow][icol] = recentValue;
        recentValue++;

        int newIRow = irow + drow[direction];
        int newICol = icol + dcol[direction];

        if (newIRow >= m || newICol >= m || a[newICol][newIRow])
        {
            direction = (direction + 1) % 4;
            newIRow =  irow + drow[direction];
            newICol = icol + dcol[direction];
        }

        irow = newIRow;
        icol = newICol;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; i < n; j++)
            cout << a[i][j] << endl;
        cout << endl;
    return 0;
}