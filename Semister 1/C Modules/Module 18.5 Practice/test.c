#include <stdio.h>

int count(int n)
{
   if (n == 0)
   {
      return 0;
   }
   else
   {
      return 1 + count(n / 10);
   }
}

int main()
{
    int result = count(100);
    printf("%d", result);
    return 0;
}