// Hãy viết hàm int** transpose(int** matrix, int nRows, int nCols) nhận đầu vào là một ma trận matrix
//  bất kỳ có kích cỡ nRows×nCols
//  chứa các giá trị nguyên.

// Hàm trả về ma trận chuyển vị của ma trận matrix
//  là ma trận matrixT
//  có kích thước nCols×nRows
//  với các hàng được thay thế bởi các cột.

int** transpose(int** matrix, int nRows, int nCols)
{
    int** transposedMatrix = new int*[nCols];
    for (int i = 0; i < nCols; i++) 
    {
        transposedMatrix[i] = new int[nRows];
    }
    
    for (int i = 0; i < nRows; i++) 
    {
        for (int j = 0; j < nCols; j++) 
        {
            transposedMatrix[j][i] = matrix[i][j];
        }
    }
    
    return transposedMatrix;
}