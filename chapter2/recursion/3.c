#include <stdio.h>

int sum_digit(int n);

int main(void)
{
    int n;
    printf("Enter a numbe rto print the sum: ");
    scanf("%d", &n);

    // printf("The sum is: %d\n", 1 / 10);
    printf("The sum is: %d\n", sum_digit(n));

}

int sum_digit(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n % 10 + sum_digit(n / 10);
}