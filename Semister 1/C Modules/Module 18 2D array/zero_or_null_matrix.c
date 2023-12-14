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
    int tel = row*col, iszero=0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(ar[i][j] == 0)
            {
                iszero++;
            }
        }
    }
    if(tel == iszero)
    {
        printf("Zero matrix");
    }
    else{
        printf("Not a zero matrix");

    }
    return 0;
}