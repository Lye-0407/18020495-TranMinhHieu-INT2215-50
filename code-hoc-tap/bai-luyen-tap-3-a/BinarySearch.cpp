#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(const vector<int>& Arr , int left , int right, int target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return true;

        if (arr[min] < target) left = mid + 1;

        else right = mid - 1;
    }
    return false;
}

int main()
{
    int m, n;
    cin >> m >> n;
    
    vector<int> Mrr(m);
    vector<int> Nrr(n);
    
    for (int i = 0; i < m; i++)
        cin >> Mrr[i];
        
    for (int i = 0; i < n; i++)
        cin >> Nrr[i];
        
    for (int i = 0; i < n; i++)
    {
        if (BinarySearch(Mrr, 0, m - 1, Nrr[i]) != -1) 
            cout << "YES" << " ";
        else 
            cout << "NO" << " ";
    }
    return 0;
}