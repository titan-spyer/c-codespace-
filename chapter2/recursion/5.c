#include <stdio.h>

int count_zero(int n);


int main(void)
{
    int n;
    printf("ENter a number to count the zeros: ");
    scanf("%d", &n);
    printf("%d\n", count_zero(n));
}

int zero = 0;
int count_zero(int n)
{
    if (n/10 == 0)
    {
        return zero;
    }
    if (n%10 == 0)
    {
        zero++;
    }
    return count_zero(n / 10);
    
}
