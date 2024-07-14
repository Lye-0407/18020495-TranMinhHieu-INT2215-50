#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findLargestSubset(vector<int> A, int n) 
{
    sort(A.begin(), A.end());
    int max_count = 1; 
    int current_count = 1;

    for (int i = 1; i < n; i++) 
    {
        if (A[i] - A[i-1] <= 1) 
        {
            current_count++;
            max_count = max(max_count, current_count);
        } 
        else 
        {
            current_count = 1;
        }
    }

    return max_count;
}

int main() 
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++) 
        cin >> A[i];

    int result = findLargestSubset(A, n);
    cout << result << endl;

    return 0;
}