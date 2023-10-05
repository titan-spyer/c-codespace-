#include <stdio.h>

int plusOne(int digits[], int digitsSize);
int main(void) {
    int digits[3] = {1, 2, 3};
    int digitsSize = 3;
    int returnsize[] = {};
    int num =  plusOne(digits, digitsSize);
    return 0;
}

int plusOne(int digits[], int digitsSize){
    if (digitsSize == 0)
    {
        return digits[digitsSize] + 1;
    }
    return plusOne()
    
}