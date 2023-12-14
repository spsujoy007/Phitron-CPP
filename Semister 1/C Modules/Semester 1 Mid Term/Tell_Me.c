#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        int arr[m];
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &arr[j]);
        }
        int find;
        scanf("%d", &find);
        
        int founded=1;
        for(int j = 0; j < m; j++)
        {
            if(arr[j] == find)
            {
                founded=1;
                break;
            }
            else{
                founded = 0;
            }
        }
        if(founded == 1)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}