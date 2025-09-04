#include <stdio.h>
#include <stdlib.h>

void selectionsort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int mini = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int x = arr[i];
        arr[i] = arr[mini];
        arr[mini] = x;
    }
}

int main()
{
    int arr[] = {5, 7, 1, 2, 8, 9, 3};
    int size = (sizeof(arr) / sizeof(arr[0]));
    selectionsort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}