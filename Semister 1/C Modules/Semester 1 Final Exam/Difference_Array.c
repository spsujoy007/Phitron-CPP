#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int t = 0; t < n; t++)
    {
        int m;
        scanf("%d", &m);

        int a[m], b[m], c[m];
        for(int i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
        }
        for(int i = 0; i < m; i++) //for copy the array;
        {
            b[i] = a[i];
        }
        int k=m-1;
        for(int i = 0; i < m-1; i++)
        {
            for(int j = i+1; j < m; j++)
            {
                if(b[i] > b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for(int i = 0; i < m; i++)
        {
            c[i] = abs(a[i]-b[i]);
        }

        for(int i = 0; i < m; i++)
        {
            printf("%d ", c[i]);
        }
        
        printf("\n");
    }

    return 0;
}