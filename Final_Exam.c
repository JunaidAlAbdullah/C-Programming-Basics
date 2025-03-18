#include<stdio.h>
int main()
{

    for (int i = 0; i < 5; i++)
    {
        printf("Hello\n");
    }
    
        return 0;
}




// Find the missing number

// #include<stdio.h>

// int main() 
// {
//     int T;
//     scanf("%d", &T);

//     for (int i = 0; i < T; i++) 
//     {
//         long long M, A, B, C;
//         scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

//         long long product_ABC = A * B * C;

//         if (product_ABC != 0) 
//         {
//             if (M % product_ABC == 0) 
//             {
//                 long long D = M / product_ABC;
//                 printf("%lld\n", D);
//             } 
//             else 
//             {
//                 printf("-1\n");
//             }
//         } 
//         else 
//         { 
//             if (M == 0) 
//             {
//                 printf("0\n");
//             } 
//             else 
//             {
//                 printf("-1\n");
//             }
//         }
//     }

//     return 0;
// }












// Swap in Matrix

// #include <stdio.h>

// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int matrix[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // Swapping first and last columns
//     for (int i = 0; i < N; i++)
//     {
//         int temp = matrix[i][0];
//         matrix[i][0] = matrix[i][M - 1];
//         matrix[i][M - 1] = temp;
//     }

//     // Swapping first and last rows
//     for (int j = 0; j < M; j++)
//     {
//         int temp = matrix[0][j];
//         matrix[0][j] = matrix[N - 1][j];
//         matrix[N - 1][j] = temp;
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }













// Jadu Matrix

// #include <stdio.h>

// int main()
// {
//     int N, M;
//     scanf("%d %d", &N, &M); // Read the dimensions of the matrix

//     // If the matrix is not square, it's not a Jadu matrix
//     if (N != M)
//     {
//         printf("NO\n");
//         return 0;
//     }

//     int matrix[N][M];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             if (i == j || i == M - j - 1)
//             {
//                 if (matrix[i][j] != 1)
//                 {
//                     printf("NO\n");
//                     return 0;
//                 }
//             }
//             else
//             {
//                 if (matrix[i][j] != 0)
//                 {
//                     printf("NO\n");
//                     return 0;
//                 }
//             }
//         }
//     }

//     printf("YES\n");
//     return 0;
// }












// Visiting Monument

// #include<stdio.h>

// void func(int x)
// {
//     if(x == 0)
//     {
//         return;
//     }

//     func(x -1);

//     printf("%d ", x);

// }

// void func2(int x)
// {
//     if(x == 0)
//     {
//         return;
//     }

//     printf("%d ", x);

//     func2(x - 1);
// }

// int main()
// {
//     int a;
//     scanf("%d", &a);

//     for (int i = 0; i < a; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         func(n);
//         func2(n-1);

//         printf("\n");
//     }

//     return 0;
// }
