// Viết hàm int* getPointerToArray(int n). Hàm này khai báo một con trỏ kiểu nguyên, cấp phát bộ nhớ động cho con trỏ đó n
//  phẩn tử kiểu nguyên và sau đó gán giá trị cho n
//  phần tử đó các số được nhập từ bàn phím. Hàm trả về con trỏ được khai báo. 

int* getPointerToArray(int n)
{
    int *arr;
    arr = new int [n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    return arr;
}