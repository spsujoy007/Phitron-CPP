// #include <stdio.h>

// long long int fun(long long int ar[], long long int n)
// {
//     if(n == 0) return 0;
//     int total = fun(ar, n-1);
//     return total+ar[n-1];
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     long long int ar[n];
//     for(int i = 0 ; i < n; i++)
//     {
//         scanf("%lld", &ar[i]);
//     }
//     long long int total = fun(ar, n);
//     printf("%lld", total);

//     return 0;
// }