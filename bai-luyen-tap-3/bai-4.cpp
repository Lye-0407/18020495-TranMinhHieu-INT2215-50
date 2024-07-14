#include <iostream>
#include <vector>

using namespace std;

// Hàm tạo ma trận kỳ ảo kích thước NxN và trả về nó
vector<vector<int>> createMagicSquare(int N) {
    // Tạo ma trận kích thước NxN, ban đầu gán tất cả các giá trị bằng 0
    vector<vector<int>> magicSquare(N, vector<int>(N, 0));

    int num = 1;
    int i = 0, j = N / 2; // Bắt đầu tại hàng đầu tiên, cột giữa

    while (num <= N * N) {
        magicSquare[i][j] = num; // Đặt số hiện tại vào vị trí (i, j)
        num++; // Tăng số lên

        // Tính vị trí tiếp theo
        int newi = (i - 1 + N) % N;
        int newj = (j + 1) % N;

        // Kiểm tra nếu vị trí mới đã được điền, di chuyển xuống hàng dưới
        if (magicSquare[newi][newj] != 0) {
            i = (i + 1) % N;
        } else {
            i = newi;
            j = newj;
        }
    }

    return magicSquare;
}

// Hàm hiển thị ma trận
void printMagicSquare(const vector<vector<int>>& magicSquare) 
{
    int N = magicSquare.size();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << magicSquare[i][j] << " ";
        }
        cout << endl;
    }
}

int main() 
{
    int N;
    cin >> N;
    printMagicSquare(createMagicSquare(N));
    return 0;
}