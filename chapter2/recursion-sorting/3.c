#include <stdio.h>
#include <cs50.h>

void print_star(int array[], int row, int col, int max);

int main(void)
{
    int array[5] = { 8,
                     6,
                     4,
                     3,
                     1 };
    int max = 0;
    print_star(array, 5, 0, max);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void print_star(int array[], int row, int col, int max)
{
    if (row == 0)
    {
        return;
    }
    if (col < row)
    {
        if (array[col] > array[max])
        {
            print_star(array, row, col + 1, col);
        }
        else
        {
            print_star(array, row, col + 1, max);
        }
    }
    else
    {
        int temp = array[max];
        array[max] = array[row - 1];
        array[row - 1] = temp;
        print_star(array, row - 1, 0, 0);
    }
}
