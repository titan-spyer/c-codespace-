#include <stdio.h>

void print_number(int n);

int main(void)
{
    int n;
    printf("Enter a number to print: ");
    scanf("%d", &n);
    print_number(n);
}

void print_number(int n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }
    printf("%d\t", n);
    print_number(n - 1);
    printf("%d\t", n);
}