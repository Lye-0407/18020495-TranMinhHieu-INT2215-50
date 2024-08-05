// Viết hàm đảo ngược xâu dùng con trỏ void reverse(char *s).

void reverse(char *s)
{
    char* left = s;
    char* right = s + strlen(s) - 1;

    // while (right > left)
    // {
    //     char temp = *left;
    //     *left = *right;
    //     *right = temp;

    //     left++;
    //     right--;
    // }

    while (left <= right)
    {
        swap(*left, *right)
        left++;
        right--;
    }
}