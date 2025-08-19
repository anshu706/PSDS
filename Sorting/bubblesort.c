// Bubble Sort: Bubble Sort is a sorting algorithm where we swap adjacent elements if they are in wrong order
// Time Complexity
// Best Case - O(n)
// Worst Case - O(n*n)

#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = 1;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 4, 7, 8, 9, 1, 3, 2, 6};
    int size = (sizeof(arr) / sizeof(arr[0]));
    bubblesort(arr, size);
    printf("Sorted array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}