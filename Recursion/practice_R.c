// // Print numbers from 1 to n using recursion

// #include <stdio.h>

// void f(int count, int n)
// {
//     if (count > n)
//     {
//         return;
//     }

//     printf("%d\n", count);
//     f(count + 1, n);
// }

// int main()
// {
//     int n;
//     printf("Enter n:");
//     scanf("%d\n", &n);
//     f(1, n);
// }

// Print numbers from n to 1 using recursion

#include <stdio.h>

void f(int count, int n)
{
    if (count < 1)
    {
        return;
    }

    printf("%d\n", count);
    f(count - 1, n);
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    f(n, 1);
}