#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target);
int* returnSize[] = {};
int main(void)
{
    int nums[5] = {2, 7, 11, 6, 3};
    int numSize = 5;
    int target;
    printf("Enter a target number: ");
    scanf("%d", &target);
    twoSum(nums, numSize, target);
}

int* twoSum(int* nums, int numsSize, int target){

for (int i = 0; i < numsSize; i++)
{
    if ((nums[i] + nums[i + 1]) == target)
    {
        returnSize[i] = nums[i], returnSize[i + 1] = nums[i + 1];
        break;
    }
}
return returnSize;
}