#include <iostream>
#include <vector>

using namespace std;

{
    int n = times.size();
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n -1; j++)
        {
            if (times[j] > times[j + 1])
                swap(times[j], times[j+1]);
        }
    }
}

int minTimeWaiting(vector<int> times)
{
    bubbleSort(times);
    
    int totalTime = 0;
    int currentTime = 0;
    
    for (int i = 0; i <= times.size(); i++)
    {
        totalTime += currentTime;
        currentTime += times[i];
    }
    return totalTime;
}

int main()
{
    int n;
    cin >> n;

    vector<int> times(n);

    for (int i = 0; i < n; i++)
        cin >> times[i];

    cout << minTimeWaiting(times);

    return 0;
}