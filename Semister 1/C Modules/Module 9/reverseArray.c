#include <stdio.h>
int main()
{
    int n;
    scanf("%d" , &n);
    int ar[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    //first of all I need the first element and the last element from the array with (n - 1)
    int i = 0, j = n-1;
    //if i < j for stop the loop when the index are reversed
    while(i < j)
    {
        //store the first index value;
        int tmp = ar[i];
        //exchange first index value with last index value;
        ar[i] = ar[j];
        //exchange the last index value with first index by stored tmp value
        ar[j] = tmp;
        //increase i index value;
        i++;
        //decrease j index value;
        j--;
    }
    
    for(int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}