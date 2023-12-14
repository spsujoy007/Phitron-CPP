#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int m1, m2,day;
        scanf("%d %d %d", &m1, &m2, &day);
        int previous = (m1*day)/(m1+m2);
        printf("%d\n", day - previous); 
    }
    return 0;
}