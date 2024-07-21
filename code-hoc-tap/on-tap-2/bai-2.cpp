#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int arr[1000000];
int n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
        
    sort(arr + 1, arr + n + 1);
    
    int minDistance = 999999999;
    
    for (int i =2 ; i <= n; i++)
    {
        int distance = abs(arr[i] - arr[i-1]);
        minDistance = min(distance, minDistance);
    }
    cout << minDistance;

    return 0;
}