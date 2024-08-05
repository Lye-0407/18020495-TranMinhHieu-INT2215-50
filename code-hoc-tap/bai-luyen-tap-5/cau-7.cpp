// Viết hàm lọc ký tự phía bên phải xâu dùng con trỏ void rFilter(char *s).
// Lọc các ký tự không nằm trong bảng chữ cái tiếng Anh (a-zA-Z) nằm ngoài cùng bên phải xâu, chuyển thành '_'.

void rFilter(char *s)
{
    int length = strlen(s);
    
    while(length > 0 && !isalpha(s[length - 1]))
    {
        s[length - 1] = '_';
        length--;
    }
}
