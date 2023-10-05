#include <stdio.h>
#include <cs50.h>

void print_star(int row, int col);

int main(void) {
    int row;
    printf("Enter an number to print star: ");
    scanf("%d", &row);
    print_star(row, 0);
    return 0;
}

void print_star(int row, int col)
{
    if (row == 0)
    {
        return;
    }
    if (col < row)
    {
        printf("*");
        print_star(row, col + 1);
    }
    else
    {
        printf("\n");
        print_star(row - 1, 0);
    }
}
