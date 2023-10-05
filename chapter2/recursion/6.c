#include <stdio.h>

int number(int n);

int main(void)
{
    int n;
    printf("ENter a number to count the steps: ");
    scanf("%d", &n);
    printf("%d\n", number(n));
}

int sum = 0;

int number(int n)
{
    if (n == 0)
    {
        return sum;
    }
    if (n % 2 == 0)
    {
        sum++;
        return number(n / 2);
    }
    else if (n % 2 == 1)
    {
        sum++;
        return number(n - 1);
    }
    
    
    
}