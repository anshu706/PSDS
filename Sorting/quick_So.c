// Time Complexity:
// O(n log n) on average
// O(n^2) in the worst case

#include <stdio.h>

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            int x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
        }
    }
    int x = arr[low];
    arr[low] = arr[j];
    arr[j] = x;
    return j;
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int index = partition(arr, low, high);
        quicksort(arr, low, index - 1);
        quicksort(arr, index + 1, high);
    }
}

int main()
{
    int arr[] = {5, 3, 6, 7, 4, 1, 2};
    int size = (sizeof(arr) / sizeof(arr[0]));
    quicksort(arr, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}