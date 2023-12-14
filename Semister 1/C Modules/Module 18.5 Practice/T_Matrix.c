#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int primary = 0, secondary=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                primary=primary+ar[i][j];
            }
            if(i + j == n-1)
            {
                secondary=secondary+ar[i][j];
            }
        }
    }
    int difference = abs(primary - secondary);
    printf("%d", difference);
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int N;
//     scanf("%d", &N);
//     int A[N][N];

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j < N; j++) {
//             scanf("%d", &A[i][j]);
//         }
//     }

//     int primary = 0, secondary = 0;

//     for (int i = 0; i < N; i++) {
//         primary += A[i][i];
//         secondary += A[i][N - 1 - i];
//     }

//     int difference = abs(primary - secondary);

//     printf("%d\n", difference);

//     return 0;
// }