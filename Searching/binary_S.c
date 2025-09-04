// Time Complexity: O(log n)
// Space Complexity: O(1)
// binary search is faster than linear search
#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            printf("Target %d found at index %d\n", target, mid);
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
    }
    printf("Target %d is not found\n", target);
    return -1;
}

int main()
{
    int arr[] = {3, 5, 9, 12, 14, 18, 19, 23, 27};
    int target = 23;
    int size = sizeof(arr) / sizeof(arr[0]);
    binarysearch(arr, size, target);
}