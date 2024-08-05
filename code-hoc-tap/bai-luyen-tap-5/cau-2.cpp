// Việc hoán đổi giá trị của hai biến được sử dụng trong nhiều bài toán, chẳng hạn như bài toán sắp xếp. Viết hàm void swap(int* a, int* b) thực hiện việc hoán đổi giá trị của hai biến a
//  và b
// . 

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}