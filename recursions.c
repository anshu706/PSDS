#include <stdio.h>

void f(int count, int n)
{
    if (count > n)
    {
        return;
    }

    printf("%d", count);
    count++;
    f(count, n);
}

int main()
{
    int n;
    scanf("%d", &n);
    f(1, n);
}