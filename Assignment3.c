// no repeatation

#include <stdio.h>


int main() 
{
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int count = 0;


    for (int i = 0; i < n; i++) 
    {
        int search = 0;

        // Count occurrences of arr[i] in the entire array
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                search++;
            }
        }

        // If occurrences is exactly 1, increase the count of unique elements
        if (search == 1) 
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}










// Dynamic Array


// #include<stdio.h>
// #include<stdlib.h>

// int main ()
// {

//     int N;
//     scanf("%d", &N);

//     int *arr = (int*)malloc(sizeof(int));
  
//     for (int i = 0; i < N; i++)
//     {
//         int num;
//         scanf("%d", &num);

//         arr = (int *)realloc(arr, (i+1) * sizeof(int));
        
//         arr[i] = num;
   
//     }
    

//     for (int i = 0; i < N; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     free(arr);
//     return 0;
// }










// count

// #include <stdio.h>

// int main() {
//     int N, M, X;
//     scanf("%d %d %d", &N, &M, &X);

//     int matrix[N][M];


//     for (int i = 0; i < N; i++) 
//     {
//         for (int j = 0; j < M; j++) 
//         {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     // search

//     for (int k = 0; k < X; k++) 
//     {
//         int number;
//         int count = 0;
//         scanf("%d", &number);

//         // count

//         for (int i = 0; i < N; i++) 
//         {
//             for (int j = 0; j < M; j++) 
//             {
//                 if (matrix[i][j] == number) 
//                 {
//                     count++;
//                 }
//             }
//         }

//         printf("%d\n", count);
//     }

//     return 0;
// }













// difference

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {

//     int a;
//     int b;
//     scanf("%d %d", &a, &b);

//     int *x = &a;
//     int *y = &b;

//     int dif = abs(*x - *y);
  

//     printf("%d", dif);
    

//     return 0;
// }










// // unit mat = main corner should be all 1


// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int m[n][n];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &m[i][j]);
//         }        
//     }
    
//     int element = 1; // for checking main corner

//     int flag = 1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if(i==j)
//             {
//                if(m[i][j] != element)
//                {
//                 flag = 0;  
//                 break;  // code will be stop here if the value isnt = 1
//                } 
//             }
//             else // if i != j
//             {
//                 if (m[i][j] !=0) // this values should be 0. if not then this isnt unit
//                 {
//                     flag = 0;
//                     break;
//                 }
                
//             }
//         }
//     }
    
//     if (flag == 1) // if flag is still 1. means all condition passed.
//     {
//         printf("Yes");
//     }
//     else
//     {
//         printf("No");
//     }
    
//     return 0;
// }