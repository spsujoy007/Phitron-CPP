#include <stdio.h>
int main()
{
    // char a[6] ={'S', 'u', 'j', 'o', 'y'}; no_gurante 
    // we can use null with \0 or more then the string size;
    char a[6] ="Sujoy\0";
    printf("%s", a);
    return 0;
}