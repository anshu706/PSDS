#include <stdio.h>

void mergesort(int arr1[], int size1, int arr2[], int size2)
{
    int arr[size1 + size2];
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < size1)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while (j < size2)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < size1 + size2; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr1[] = {5, 7, 9};
    int arr2[] = {4, 6, 8};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    mergesort(arr1, size1, arr2, size2);
}