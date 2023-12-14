#include <stdio.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    // printf("%s %s", a, b);
    int i = 0;
    while(1)
    {
        if(a[i] == '\n' && b[i]=='\n')
        {
            printf("Same\n");
            break;
        }
        else if(a[i] == '\n')
        {
            printf("A is small\n");
            break;
        }
        else if(b[i] == '\n')
        {
            printf("B is small\n");
            break;
        }

        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i] < b[i])
        {
            printf("A is small\n");
            break;
        }
        else if(a[i] > b[i])
        {
            printf("B is small\n");
            break;
        }
        else{
            printf("Same\n");
            break;
        }

    }
    return 0;
}