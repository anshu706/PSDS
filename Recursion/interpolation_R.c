/*
mid = low[(target-arr[low])*[high-low]/(arr[high]-arr[low])]

arr[mid]==target -> return mid
arr[mid] < target -> low = mid+1
arr[mid] > target -> high = mid - 1
*/

#include <stdio.h>

int interpolation(int arr[], int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high && target >= arr[low] && target <= arr[high])
    {
        int mid = low + (target - arr[low]) * (high - low) / (arr[high] - arr[low]);
        if (arr[mid] == target)
        {
            printf("%d is found at index %d", target, mid);
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("%d is not found");
    return -1;
}
int main()
{
    int arr[] = {3, 6, 9, 12, 25, 34, 67, 89};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int target = 67;
    interpolation(arr, size, target);

    return 0;
}
