#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, s = n-1;
    for(int i = 0; i < (n*2); i++)
    {
        for(int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for(int j = 0; j < k; j++)
        {
            if(i%2==1)
            {
                printf("-");
            }
            else{
                printf("#");
            }
        }
        if(i < n-1)
        {
            k+=2;
            s--;
        }
        else{
                k-=2;
            s++;
        }
        
        printf("\n");
    }

    return 0;
}