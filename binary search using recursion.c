#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key)
 {
    if (low <= high)
        {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, low, mid - 1, key);
        else
        return binarySearch(arr, mid + 1, high, key);
       }
    return -1;
}

int main()
{
    int arr[100], n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to be searched: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element %d is present at index %d\n", key, result);
    else
        printf("Element %d is not present in the array\n", key);
}
