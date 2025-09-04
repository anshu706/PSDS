// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>
#include <stdlib.h>

int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            printf("%d is found at index %d", target, i);
            return i;
        }
    }
    printf("%d is not found", target);
    return -1;
}

int main()
{
    int arr[] = {5, 7, 4, 8, 9, 13, 2};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int target = 13;
    linearsearch(arr, size, target);
}
