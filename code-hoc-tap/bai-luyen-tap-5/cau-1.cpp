// Viết hàm void multiply (int* n, int k) thực hiện phép nhân giá trị do con trỏ n
//  trỏ tới lên k
//  lần

void multiply (int* n, int k)
{
    if (n != nullptr)
        *n = (*n) * k;
}