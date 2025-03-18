// Lowest Number

#include <stdio.h>

int main ()
{
int N;
scanf("%d", &N);

int a[N];

for (int i = 0; i < N; i++)
{
    scanf("%d", &a[i]);
}

int min = a[0];
int minIndex = 1;

for (int i = 1; i < N; i++)
{
    if (a[i] < min)
    {
        min = a[i];
        minIndex = i+1;
    }   
}
    printf("%d %d", min, minIndex);


return 0;
}






// Positions in array

// #include <stdio.h>

// int main ()
// {
// int N;
// scanf("%d", &N);


// int a[N];

// for (int i = 0; i < N; i++)
// {
//     scanf("%d", &a[i]);
// }

// for (int i = 0; i < N; i++)
// {
//     if (a[i] <= 10)
//     {
//         printf("A[%d] = %d\n", i,  a[i]);
//     }   
// }

// return 0;
// }






// Replacement

// #include <stdio.h>

// int main ()
// {
// int N;
// scanf("%d", &N);


// int a[N];

// for (int i = 0; i < N; i++)
// {
//     scanf("%d", &a[i]);
// }

// for (int i = 0; i < N; i++)
// {
//     if (a[i] > 0)
//     {
//         printf("1 ");
//     }
//     else if (a[i] < 0)
//     {
//         printf("2 ");
//     }
//     else if (a[i] == 0)
//     {
//        printf("0 ");
//     }
    
// }

// return 0;
// }








// searching

// #include <stdio.h>

// int main ()
// {
// int N;
// scanf("%d", &N);
// int count=-1;

// int a[N];

// for (int i = 0; i < N; i++)
// {
//     scanf("%d", &a[i]);
// }

// int X;
// scanf("%d", &X);

// for (int i = 0; i < N; i++)
// {
//     if (X == a[i])
//     {
//         count = i;
//         break;
//     }
    
// }
//     if (count != -1)
//     {
//        printf("%d", count);
//     }
//     else 
//     {
//      printf("%d", count);
//     }
    

// return 0;
// }



// summation

// #include <stdio.h>

// int main ()
// {
// int N;

// long long sum=0;

// scanf("%d", &N);

// int a[N];
// for (int i = 0; i < N; i++)
// {
//     scanf("%d", &a[i]);
//     sum += a[i];
// }

// if (sum<0)
//     {
//         sum = sum * -1;
//     }
    
// printf("%lld\n", sum );

// return 0;
// }





// // #include <stdio.h>

// // int main() 
// // {
// //     int N;
// //     long long sum = 0; 

// //     scanf("%d", &N); 
  
// //     for (int i = 0; i < N; i++) 
// //     {
// //         long long num;
// //         scanf("%lld", &num); 
// //         sum += num; 

// //     }
// //     if (sum < 0) 
// //     {
// //         sum = sum * -1;
// //     }

    
// //     printf("%lld\n", sum);

// //     return 0;
// // }