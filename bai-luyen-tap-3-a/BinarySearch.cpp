int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1; // Không tìm thấy phần tử
    }

    int mid = left + (right - left) / 2;

    // Nếu phần tử ở giữa là phần tử cần tìm
    if (arr[mid] == target) {
        return mid;
    }
    
    // Nếu phần tử cần tìm nhỏ hơn phần tử ở giữa, tìm kiếm trong nửa bên trái
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }

    // Nếu phần tử cần tìm lớn hơn phần tử ở giữa, tìm kiếm trong nửa bên phải
    return binarySearch(arr, mid + 1, right, target);
}