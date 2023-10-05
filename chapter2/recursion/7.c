#include <stdio.h>

int checkdom(int x);
int sum = 0;

int main(void)
{
    int x;
    printf("Enter a number to check wheather it is palindrom or not: ");
    scanf("%d", &x);
    int value = checkdom(x);
    if (x == value)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    
}

int checkdom(int x)
{
    if (x == 0)
    {
        return sum;
    }
    int n = x % 10;
    sum = (n * 10) + n;
    return checkdom(x / 10);
}