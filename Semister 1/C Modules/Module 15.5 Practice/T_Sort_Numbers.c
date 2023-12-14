#include <stdio.h>

void fun(int a, int b, int c)
{
    int arr[3] = {a, b, c};
    int oldarr[3] = {a, b, c};
    // *(arr+1) = 200;
    for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j < 3; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

    printf("\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d\n", oldarr[i]);
    }
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    fun(a, b, c);
    return 0;
}