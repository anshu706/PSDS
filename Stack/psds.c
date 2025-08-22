#include <stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) // Read n numbers
    {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i <= n; i++) // Check from 0 to n
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (i == nums[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            printf("Missing number is %d\n", i);
        }
    }

    return 0;
}
