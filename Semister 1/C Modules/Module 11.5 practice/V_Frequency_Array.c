#include <stdio.h>
#include <string.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt[6]={0};
    for(int i = 0; i < n; i++)
    {
        int val = arr[i];
        cnt[val] = cnt[val]+1;
    }

    for(int i = 0; i < m+1; i++)
    {
        if(cnt[i] != 0)
        {
            printf("%d\n", cnt[i]);
        }
    }

    return 0;
}