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