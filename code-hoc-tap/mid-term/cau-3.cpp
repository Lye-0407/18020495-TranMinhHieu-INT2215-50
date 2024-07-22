#include <iostream>

using namespace std;

void bubbleSort(vector<int>arr, int n)
{
    for(int k = n - 1; k > 0; k--)
    {
        bool swapped = false;
        for (int i = 1; i <= k; i++)
        {
            if (arr[i-1] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swapped = true;
            } 
        }
        if(!swapped) break;
    }
}