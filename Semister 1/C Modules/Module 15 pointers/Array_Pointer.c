#include <stdio.h>
int main()
{
    int arr[3] = {5, 2 , 3};
    for(int i = 0; i < 3; i++)
    {
        // printf("%p\n", &arr[i]);
        printf("%d\n", *(arr+i));
    }
    return 0;
}