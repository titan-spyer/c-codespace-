#include <stdio.h>

int sorted(int number[], int x, int i);

int main(void)
{
    int x = 5;
    int number[5] = {};
    for (int i = 0; i < x; i++)
    {
        printf("Enter the %d number of array\n", i);
        scanf("%d", &number[i]);
    }
    int i = 0;
    int n = sorted(number, x, i);
    if (n == 0)
    {
        printf("True\n");
    }
    else if (n == 1)
    {
        printf("false\n");
    }
}

int sorted(int number[], int x, int i)
{
    if (x < 0)
    {
        return 0;
    }
    if (number[i] < number[i + 1])
    {
        return sorted(number, x - 1, i + 1);
    }
    return 1;
    
    
}