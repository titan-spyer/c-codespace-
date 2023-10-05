#include <stdio.h>

int target_num(int number[], int length, int target);
int main(void) {
    int number[5] = {1, 2, 3, 4, 5};
    int length = sizeof(number) / sizeof(number[0]);
    int target = 6;
    int value = target_num(number, (length - 1), target);
    if (value == 0) {
        printf("True\n");
    } else if (value == 1) {
        printf("False\n");
    }
    return 0;
}
int target_num(int number[], int length, int target)
{
    if (length < 0)
    {
        return 1;
    }
    if (number[length] == target)
    {
        return 0;
    }
    return target_num(number, (length - 1), target);
}