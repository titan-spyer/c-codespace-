#include <stdio.h>

#define LOWER 0 
#define UPPER 300
#define STEP 20

int main(void)
{
    for(int i = LOWER; i <= UPPER; i+=STEP)
    {
        printf("%4d %6.1f\n", i, (5.0/9.0)*(i-32));
    }
}