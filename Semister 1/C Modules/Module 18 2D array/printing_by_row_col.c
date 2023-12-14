#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    printf("\nResult: \n");
    int exact_row=2;
    for(int j = 0; j < col; j++)
    {
        printf("%d ", ar[exact_row][j]);
    }
    printf("\n");
    return 0;
}