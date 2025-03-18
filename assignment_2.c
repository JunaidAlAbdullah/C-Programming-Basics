// // Pattern again

// #include <stdio.h>
// int main ()
// {
//     int N;
//     scanf("%d", &N);


//     for (int i = 0; i <= N; i++)
//     {
        
//        for (int j = 1; j <= i; j++)
//        {
//         printf("%d", j);
//        }
//        printf("\n");
//     }
    
//     for (int i = N - 1; i >= 1; i--)
//     {

//         for (int space = 1; space <= N - i; space++)
//         {
//             printf(" ");
//         }

//         for (int j = 1; j <= i; j++)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }







// // // Salami again
// // #include <stdio.h>
// // int main ()
// // {
// //     int N;
// //     scanf("%d", &N);

// //     int max = 0;

// //     int a[N];

// //     for (int i = 0; i < N; i++)
// //     {
// //         scanf("%d", &a[i]);
// //         if (a[i] > max)
// //         {
// //            max = a[i];
// //         }
        
// //     }
     
// //     for (int i = 0; i < N; i++)
// //     {
// //         int new = max - a[i];
// //         printf("%d ", new);
// //     }
    
// //     return 0;
// // }








// // Vowel and Consonant

// // #include <stdio.h>
// // int main ()
// // {
// //     char C;
// //     scanf("%c", &C);

// //     if (C=='a' || C=='e' || C=='i' || C=='o' || C=='u')
// //     {
// //        printf("Vowel");
// //     }
// //     else
// //     {
// //         printf("Consonant");
// //     }
    
// //     return 0;
// // }








// // // Zeros and Ones 02

// // #include <stdio.h>

// // int main()
// // {
// //     int N;
// //     scanf("%d", &N);

   
// //     int a[N];

// //     for (int i = 0; i < N; i++)
// //     {
// //         scanf("%d", &a[i]);
// //     }


// //     for (int i = 0; i < N; i++)
// //     {
// //          int x;
// //     scanf("%d", &x);

// //         if (&a[i] == a[x])
// //         {
// //             printf("A[%d]", a[i]);
// //         }
// //         else if (a[i] == 1)
// //         {
// //             printf("%d ", zero);
// //         }
// //     }

    

// //     return 0;
// // }







// // Zeros and Ones 01

// // #include <stdio.h>

// // int main()
// // {
// //     int N;
// //     scanf("%d", &N);

// //     int a[N];

// //     for (int i = 0; i < N; i++)
// //     {
// //         scanf("%d", &a[i]);
// //     }

// //     int zeros = 0;
// //     int ones = 0;

// //     for (int i = 0; i < N; i++)
// //     {
// //         if (a[i] == 0)
// //         {
// //             zeros++;
// //         }
// //         else if (a[i] == 1)
// //         {
// //             ones++;
// //         }
// //     }
// //     printf("%d %d\n", zeros, ones);

// //     return 0;
// // }