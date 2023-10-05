#include <stdio.h>
void checklist(int number[], int target, int length);
int value[5] = {0, 0, 0, 0, 0};
int n = 0;
int main(void) {
    int number[5] = {1, 4, 4, 4, 5};
    int length = sizeof(number) / sizeof(number[0]);
    checklist(number, 4, length);
    // checklist(number, 3, length);
    // checklist(number, 5, length);
    int i = sizeof(value) / sizeof(value[0]);
    for (int j = 0; j < i; j++)
    {
        printf("\n%d\n", value[j]);
    }
    
    return 0;
}
void checklist(int number[], int target, int length)
{
    if (length < 0)
    {
        return;
    }
    if (number[length] == target)
    {
        value[n] = length;
        n++;
    }
    checklist(number, target, length - 1);
    
}