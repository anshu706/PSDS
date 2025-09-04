// // SUM OF FIRST N NUMBERS USING RECURSION

// #include <stdio.h>

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

// int main()
// {
//     int n = 5;
//     int x = sum(n);
//     printf("Sum of First %d numbers are %d\n", n, x);
// }

// FACTORIAL OF FIRST N NUMBERS USING RECURSION

#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n = 5;
    int x = factorial(n);
    printf("Factorial of %d is %d\n", n, x);
}
