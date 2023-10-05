#include <stdio.h>
#include <stdbool.h>

bool isHappy(int num);

int main(void) {
    int i = 11;
    bool value = isHappy(i);
    if (value == true) {
        printf("True\n");
    } else if (value == false) {
        printf("False\n");
    }
    return 0;
}

bool isHappy(int num){
    if (num >= 0 && num <= 9)
    {
        if (num == 1)
        {
            return true;
        }
        else if (num == 7)
        {
            return true;
        }
        
        return false;
    }
    int nums = 0;
    while (num > 0 )
    {
         nums += ((num % 10) * (num % 10));
        num /= 10;
    }
    isHappy(nums);
    // return true;
    
}