// Online C compiler to run C program online
#include <stdio.h>

int fun(char txt[], int i)
{
    if(txt[i] == '\0') return 0;
    int length = fun(txt, i+1);
    return length+1;
}

int main() {
    char txt[100]= "DicebearPart";
    int result = fun(txt, 0);
    printf("%d", result);

    return 0;
}