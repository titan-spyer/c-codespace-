#include <stdio.h>
#include <math.h>
int main(void)
{
    int min;
    do
    {
       printf("Enter the minimum value: ");
       scanf("%d", &min);
    }
    while(min < 1);
    int max;
    do
    {
        printf("Enter the maximum value: ");
        scanf("%d", &max);
    } while (max < min);
    printf("%d minmum %d maximum\n", min, max);
    for (int i = min; i < max; i++)
    {
        printf("Factor of %d: {", i);
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                printf("%d ", j);
            }
        }
        printf("}\n");
        
    }
    
}