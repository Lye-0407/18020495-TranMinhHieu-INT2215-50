#include <iostream>
#include <vector>

using namespace std;

int sum(int x, int y, vector<vector<int>> arr)
{
    int sum = arr[x-1][y-1] + arr[x-1][y] + arr[x-1][y+1] + arr[x][y-1] + arr[x][y+1] + arr[x+1][y-1] + arr[x+1][y] + arr[x+1][y+1];
    return sum;
}

int main()
{
    int M, int N, int K, int Q:
    cin >> M >> N >> K >> Q;
    
    int Kx[K], Ky[K], Kv[K];

    int Qx[Q], Qy[Q];

    vector<int> vec;
        for (int i = 0; i < M; i++)
            for (int j = 0; j < N; j++)
                vec[i][j] = 0;

    for (int i = 0; i < K, i++)
        cin >> Kx[i] >> Ky[i] >> Kv[i];

    for (int i = 0; i < Q, i++)
    {
        cin >> Qx[i] >> Qy[i];

        cout << sum(Qx[i],Qy[i],vec) << endl;

    }
}

Cho một lưới kích thước [M][N] và K truy vấn. Mỗi truy vấn thuộc K truy vấn có thông tin x,y,v.
Với mỗi truy vấn, bạn cần gán giá trị của lưới tại ô (x,y) với giá trị v.
Bạn cần trả lời Q truy vấn tiếp theo, mỗi truy vấn có thông tin x,y và bạn cần trả lại giá trị là tổng của các ô xung quanh (x,y)
Đầu vào
Dòng đầu chứa 4 số nguyên M, N, K, Q.
K dòng tiếp theo, mỗi dòng chứa 3 số nguyên x,y,v. tương ứng là vị trí (x,y) có giá trị v.
Q dòng tiếp theo mỗi dòng chứa 2 số x, y tương ứng là vị trí cần tíng tổng các ô xung quanh.