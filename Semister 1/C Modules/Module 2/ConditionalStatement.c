#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100)
    {
        printf("Burger khabo...");
    } 
    else if(tk >= 50)
    {
        printf("Chicken ball khabo...");
    }
    else{
        printf("Kicu khabo nare vai!");
    }

    return 0;
}