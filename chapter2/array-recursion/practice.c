#include <stdio.h>
#include <math.h>

int plusOne(int digits[], int digitsSize);
int main(void) {
    int digits[3] = {1, 2, 3};
    int digitsSize = 3;
    int returnsize[] = {};
    int num =  plusOne(digits, digitsSize);
    for (int i = digitsSize - 1; i >= 0; i--)
    {
        returnsize[i] = num % 10;
        num /= 10;
    }
    for (int i = 0; i < digitsSize; i++)
    {
        printf("\n%d\n", returnsize[i]);
    }
    
    return 0;
}

int plusOne(int digits[], int digitsSize){
    int number = 0;
    for (int i = 0; i < digitsSize; i++)
    {
        number = (number * 10) + digits[i];
    }
    number += 1;
    return number;

}