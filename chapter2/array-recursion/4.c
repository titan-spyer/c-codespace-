// Finding unique number in array 
#include <stdio.h>

int singleNumber(int nums[], int numsSize){
    if (numsSize == 0)
    {
        return nums[numsSize];
    }
    
    
}

int main(void) {
    int nums[5] = {1, 1, 4, 2, 2};
    int numsize = 5;
    int value = singleNumber(nums, numsize);
    // printf("%d\n", value);
    return 0;
}