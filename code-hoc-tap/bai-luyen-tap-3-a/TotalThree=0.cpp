#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void findTriplets(vector<int>& arr, int n) 
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> triplets;

    for (int i = 0; i < n - 2; i++) 
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
            
        int left = i + 1;
        int right = n - 1;
        
        while (left < right) 
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == 0) 
            {
                triplets.push_back({arr[i], arr[left], arr[right]});
                while (left < right && arr[left] == arr[left + 1]) left++; // Skip duplicates
                while (left < right && arr[right] == arr[right - 1]) right--; // Skip duplicates
                left++;
                right--;
            } else if (sum < 0)
                left++;
            else
                right--;
        }
    }

    for (const auto& triplet : triplets)
        cout << triplet[0] << " " << triplet[1] << " " << triplet[2] << endl;
}

int main() 
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findTriplets(arr, n);

    return 0;
}