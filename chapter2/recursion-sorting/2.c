#include <stdio.h>

void bubble_sort(int array[], int row, int col);
int main(void) {
    int array[5] = {6, 8, 4, 3, 1};
    bubble_sort(array, 5, 0);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void bubble_sort(int array[], int row, int col)
{
    if (row == 0)
    {
        return;
    }
    if (col < row)
    {
        if (array[col] > array[col + 1])
        {
            int temp = array[col];
            array[col] = array[col + 1];
            array[col + 1] = temp;
        }
        bubble_sort(array, row, col + 1);
        
    }
    else
    {
        bubble_sort(array, row - 1, 0);
    }
    
    
    
}