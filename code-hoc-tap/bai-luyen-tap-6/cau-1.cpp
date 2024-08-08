// Cho hai mảng a1, a2 lần lượt có số phần tử là m,n (m >=n). Biết rằng các phân từ trong một mảng không được sắp xếp và đôi một khác nhau.

// Hãy kiểm tra xem mảng a2 có phải là tập con của mảng a1 hay không.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool isSubset(const vector<int>& a1, const vector<int>& a2)
{
    unordered_set<int> setA1(a1.begin(), a1.end());

    for (int element : a2)
    {
        if (setA1.find(element) == setA1.end()) return false;
    }
    return true;
}

void inputArray(vector<int>& arr, int size)
{
    cout << size;

    for (int i = 0; i < size; ++i)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
}

int main()
{
    int m, n;

    cin >> m >> n;
    vector<int> a1, a2;
    inputArray(a1, m);
    inputArray(a2, n);

    if (isSubset(a1, a2)) cout << "Yes";
    else cout << "No";

    return 0;
}