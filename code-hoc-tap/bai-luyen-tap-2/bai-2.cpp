#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int matrix[n][n];
    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            matrix[i][j] = (i + j) % n + 1;
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}