#include <stdio.h>
int main()
{
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z'){
        if(c != 'z'){
            printf("%c", c+1);
        }
        else{
            printf("a");
        }
    }

    return 0;
}