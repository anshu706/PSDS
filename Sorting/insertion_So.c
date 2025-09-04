// Time Complexity: O(n^2)
// Space Complexity: O(1)

#include <stdio.h>

void insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int x = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = x;
            j--;
        }
    }
}
int main()
{
    int arr[] = {5, 3, 4, 2, 6, 1};
    int size = (sizeof(arr) / sizeof(arr[0]));
    insertionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}