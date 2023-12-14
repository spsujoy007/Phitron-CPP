#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i <n; i++)
    {
        char s[10000];
        scanf("%s", s);
        int uppercase=0, lowercase=0, number=0;
        for(int i =0; i < strlen(s);i++)
        {
            if(s[i] >=65 && 90 >=s[i])
            {
                uppercase++;
            } 
            else if(s[i] >=97 && 122 >=s[i])
            {
                lowercase++;
            }
            else if(s[i] >=48 && 57 >=s[i])
            {
                number++;
            }
        }
        printf("%d %d %d\n", uppercase, lowercase, number);
    }
    return 0;
}