#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binarySearch(arr, low, mid - 1, target);
    return binarySearch(arr, mid + 1, high, target);
}

int main() {
    int arr[] = {11, 22, 33, 44, 55, 66, 77};
    int idx = binarySearch(arr, 0, 6, 55);
    printf("Element 55 found at index: %d\n", idx);
    return 0;
}