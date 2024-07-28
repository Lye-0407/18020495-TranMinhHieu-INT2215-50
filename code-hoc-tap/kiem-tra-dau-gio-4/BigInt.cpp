// Cài đặt các hàm thành viên cho lớp BigInt biểu diễn một số nguyên lớn không âm như sau:

// class BigInt 
// {
//     string value;
// public:
//     // Hàm khởi tạo số nguyên lớn bằng 0
//     BigInt();

//     // Hàm khởi tạo số nguyên lớn từ một xâu c-string
//     BigInt(const char*);

//     // Hàm khởi tạo số nguyên lớn từ một số nguyên lớn khác
//     BigInt(const BigInt& );

//     // Toán tử in ra màn hình
//     friend ostream& operator<< (ostream& , const BigInt& );

//     // Toán tử cộng
//     friend BigInt operator+(const BigInt& , const BigInt & );
// };

// Toán tử in ra màn hình
ostream& operator<<(ostream& os, const BigInt& num)
{
    os << num.value;
    return os;
}

// Hàm khởi tạo
BigInt::BigInt() : value("0") {}

BigInt::BigInt(const char *num) : value(num)
{
    // Xóa các ký tự '0' đứng đầu, nhưng vẫn giữ ít nhất một chữ số.
    while (value.size() > 1 && value[0] == '0') {
        value.erase(0, 1);
    }
}

BigInt::BigInt(const BigInt& num) : value(num.value) {}

// Toán tử cộng
BigInt operator+(const BigInt& num, const BigInt& other) {
    string result = "";
    int carry = 0;
    int len1 = num.value.size();
    int len2 = other.value.size();
    int i = len1 - 1;
    int j = len2 - 1;

    // Cộng từ các chữ số thấp nhất đến cao nhất.
    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num.value[i] - '0' : 0;
        int digit2 = (j >= 0) ? other.value[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
        i--;
        j--;
    }

    // Đảo ngược chuỗi kết quả vì chúng ta đã cộng từ phải sang trái.
    reverse(result.begin(), result.end());

    return BigInt(result.c_str());
}

// Toán tử in ra màn hình
ostream& operator<<(ostream& os, const BigInt& num)
{
    os << num.value;
    return os;
}

// Hàm khởi tạo
BigInt::BigInt() 
{
    value = "0";
}

BigInt::BigInt(const char *num)
{
    string s(num);
    value = s;
}

BigInt::BigInt(const BigInt& num)
{
    value = num.value;
}

// Toán tử cộng
BigInt operator+(const BigInt& num, const BigInt& other)
{
    string first_number = num.value;
    string second_number = other.value;
    
    while(first_number.size() < second_number.size())
        first_number  = "0" + first_number;
    while(second_number.size() < first_number.size())
        second_number = "0" + second_number;
        
    int n = first_number.size();
    int cong_nho = 0;
    string result = "";
    for (int i = n - 1; i >= 0; i--)
    {
        int sum = first_number[i] - '0' + second_number[i] - '0' + cong_nho;
        cong_nho = sum / 10;
        int chu_so = sum % 10;
        result = to_string(chu_so) + result;
    }
    
    if (cong_nho > 0) result = to_string(cong_nho) + result;
    
    return BigInt(result.c_str()); // Sua dong nay
}
