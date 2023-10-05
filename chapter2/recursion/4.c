#include <stdio.h>

int revers(int n);
int sum = 0;

int main(void)
{
    int n;
    printf("Enter a numbe rto print the sum: ");
    scanf("%d", &n);
    int number = revers(n);
    printf("\n\n\t%d\n\n", number);
    if (n == number)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
}

int revers(int n)
{
    int x = 0;
    if (n%10 == 0)
    {
        printf("\n");
        return sum;
    }
    x = n % 10;
    if (x > 0 && 10 <= x)
    {
        sum = (sum * 10) + x; 
    }
    // else
    // {

    // }
    
    // sum = (sum * 10) + (n % 10);
    return revers(n / 10);
}