#include <stdio.h>
int main()
{
    int i, pass;
    scanf("%d", &pass);

    for(i = 1; i <= 1000; i++)
    {
        if(pass == i)
        {
            printf("Your password is: %d", i);
            break;
        }
    }
    return 0;
}