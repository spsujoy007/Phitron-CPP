#include <stdio.h>
#include <string.h>
void fun(char a[])
{
    printf("%d\n", strlen(a));
}
int main()
{
    char text[6] = "Hello";
    fun(text);
    return 0;
}