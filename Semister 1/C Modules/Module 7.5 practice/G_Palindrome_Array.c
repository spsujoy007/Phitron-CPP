#include <stdio.h>
int main()
{
    long long int n, cnum = 0, check=0;
    scanf("%lld", &n);
    long long int arr[n];
    for(int i = 0; i <n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(int g = n-1; g >= 0; g--)
    {
        cnum = arr[g];
    }

    for(int i = 0; i < n; i++)
    {
        if(cnum == arr[i])
        {
            check=1;
        }
        else{
            check=0;
        }
    }
    if(check == 1){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

        
    
    return 0;
}

// Given a number N
//  and an array A
//  of N
//  numbers. Determine if it's palindrome or not.

// Note:

// An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

// Input
// First line contains a number N
//  (1≤N≤105)
//  number of elements.

// Second line contains N
//  numbers (1≤Ai≤109)
// .

// Output
// Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).