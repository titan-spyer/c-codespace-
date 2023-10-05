#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n;
    printf("Ente a number to print the factorial: ");
    scanf("%d", &n);
    printf("The factorial is: %d\n", factorial(n));
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}