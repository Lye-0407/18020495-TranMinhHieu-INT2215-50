// Viết hàm int** inputMatrix(int nRows, int nCols) đọc từ bàn phím một ma trận số nguyên có số hàng nRows và số cột nCols, lưu vào một mảng động hai chiều và trả về con trỏ trỏ đến mảng động này.
// Viết hàm void printMatrix(int** matrix, int nRows, int nCols)nhận tham số là con trỏ đến mảng động hai chiều matrix, số hàng nRows và số cột nCols của ma trận. Hàm này in ma trận đầu vào ra màn hình, các phần tử trên cùng một hàng cách nhau bởi một dấu cách.

int** inputMatrix(int nRows, int nCols)
{
    int** matrix = new int* [nRows];
    for (int i = 0; i < nRows; i++)
    {
        matrix[i] = new int[nCols];
    }
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}
void printMatrix(int** matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < nCols; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
