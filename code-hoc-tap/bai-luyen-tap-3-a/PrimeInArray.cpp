#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<bool> sieveOfEratosthenes(int maxVal)
{
    vector<bool> isPrime(maxVal + 1, true);
    isPrime[0] = isPrime[1] = false;

    int k = sqrt(maxVal);

    for (int i = 2; i <= k; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= maxVal; j += i)
                isPrime[j] = false;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    int maxVal = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    vector<bool> isPrime = sieveOfEratosthenes(maxVal);

    for (int i = 0; i < n; i++)
    {
        if (isPrime[arr[i]])
            cout << arr[i] << " ";
    }
    return 0;
}