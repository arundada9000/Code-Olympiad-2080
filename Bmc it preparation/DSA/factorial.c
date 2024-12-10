#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    printf("Factorial(%d) = %d\n", n, factorial(n));

    return 0;
}
