#include <stdio.h>
// Function to perform BINARY SEARCH.
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
       // Check if the key is present at the middle
        if (arr[mid] == key)
            return mid;
       // If the key is greater, ignore the left half
        if (arr[mid] < key)
            left = mid + 1;
        // If the key is smaller, ignore the right half
        else
            right = mid - 1;
    }
    // Key was not found in the array
    return -1;
}
int main() {
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, 0, n - 1, key);

    if (result == -1)
        printf("Element is not present in the array\n");
    else
        printf("Element is present at index %d\n", result);

    return 0;
}
