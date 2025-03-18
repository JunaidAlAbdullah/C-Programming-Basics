// Matrix CF












// Checking a Scaler Matrix

// 1. diagonal
// 2. same diagonal element
// 3. all other values are 0


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
    
//     int element = m[0][0];

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
//                 break;
//                } 
//             }
//             else
//             {
//                 if (m[i][j] !=0)
//                 {
//                     flag = 0;
//                     break;
//                 }
                
//             }
//         }
//         if(flag == 0)
//         {
//             break;
//         }
//     }
    
//     if (flag == 1)
//     {
//         printf("Scaler");
//     }
//     else
//     {
//         printf("Not Scaler");
//     }
    
//     return 0;
// }








// Input Output of 2D Matrix

// #include <stdio.h>

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n+5][m+5];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
    
//     a[1][2] = 5151;

//     a[2][3] = 200;

//      for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             printf("%d ", a[i][j]);
//         }

//         printf("\n");
//     }

//     return 0;
// }









// Declaration, Initialization & access

// #include <stdio.h>

// int main()
// {

//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};    

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             printf("i = %d, j = %d address = %d ", i, j, arr[i][j]);
//         }
        
//         printf("\n");
//     }
    

//     return 0;
// }