#include <stdio.h>
#include <stdlib.h>
#define ROW 5 
#define COL 5 
void main()
{
    int row, col;
    printf("\n");
    for (row = 1; row <= ROW; row++)
    {
        if (row == ROW)
        {
            printf("%5d", 2); 
        }
        else
        {
            printf("%5d", 5 + row); 
        }
        for (col = (COL + 1) - row; col >= 2; col--)
        {
            printf("%5d", col); 
        }
        printf("\n");
    }
    system("pause");
}
