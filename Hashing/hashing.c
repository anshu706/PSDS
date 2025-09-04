#include <stdio.h>

int main()
{
    int arr[] = {4, 6, 3, 1, 4, 7};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int target = 6;
    int hash[8] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    printf("%d", hash[target]);
}
