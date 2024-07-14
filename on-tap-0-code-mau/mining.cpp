#include <iostream>
#include <vector>

using namespace std;

void cinMap(int &m, int &n, vector<vector<char>> &map) 
{
    cin >> m >> n;
    map.resize(m, vector<char> (n));
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j)
            cin >> map[i][j];
    }
}
//
int countMinesAround(const vector<vector<char>> &map, int x, int y, int m, int n) 
{
    int count = 0;
    for (int i = max(0, x - 1); i <= min(m - 1, x + 1); ++i) 
    {
        for (int j = max(0, y - 1); j <= min(n - 1, y + 1); ++j) 
        {
            if ((i != x || j != y) && map[i][j] == '*')
                count += 1;
        }
    }
    return count;
}

vector<vector<char>> solveMap(int m, int n, const vector<vector<char>> &map) 
{
    vector<vector<char>> resultMap(m, vector<char>(n));
    for (int i = 0; i < m; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            if (map[i][j] == '*') 
                resultMap[i][j] = '*';
            else
                resultMap[i][j] = '0' + countMinesAround(map, i, j, m, n);
        }
    }
    return resultMap;
}

void coutMap(const vector<vector<char>> &map) 
{
    for (const auto &row : map) 
    {
        for (const auto &cell : row) 
        {
            cout << cell << ' ';
        }
        cout << endl;
    }
}

int main() 
{
    int m, n;
    vector<vector<char>> map;

    cinMap(m, n, map);
    vector<vector<char>> resultMap = solveMap(m, n, map);
    coutMap(resultMap);

    return 0;
}