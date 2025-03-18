// // Array Reverse Using Single Array

// #include <stdio.h>

// int a[100000], b[100000];

// int main()
// {
  
// int n;

//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0, j= n -1; i <= j; i++, j--)
//     {
//         int temp = a[i];

//         a[i] = a[j];

//         a[j] = temp;
//     }
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     printf("\n");

//     return 0;
// }








// Array Reverse With Two Arrays

// #include <stdio.h>

// int a[100000], b[100000];

// int main()
// {
  
// int lenght;

//     scanf("%d", &lenght);

//     for (int i = 0; i < lenght; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     for (int i = 0, j = lenght - 1; i < lenght; i++, j--)
//     {
//         b[j] = a[i];
//     }

//     for (int i = 0; i < lenght; i++)
//     {
//         a[i] = b[i];
//     }
    

//     for (int i = 0; i < lenght; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     printf("\n");

//     // for (int i = 0; i < lenght; i++)
//     // {
//     //     printf("%d ", b[i]);
//     // }
    
    


//     return 0;
// }








// deleting

#include <stdio.h>

int a[100000], b[100000];

int main()
{
  
int lenght;

    scanf("%d", &lenght);

    for (int i = 0; i < lenght; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int index;
    scanf("%d", &index);

    for (int i = index; i < lenght - 1; i++)
    {
        a[i] = a[i+1];
    }
    
    lenght--;

    for (int i = 0; i < lenght; i++)
    {
        printf("%d ", a[i]);
    }
    


    return 0;
}









// inserting

// #include <stdio.h>

// int a[100000], b[100000];

// int main()
// {
  
// int lenght;

//     scanf("%d", &lenght);

//     for (int i = 0; i < lenght; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     int index, value;

//     scanf("%d %d", &index, &value);

//     lenght++;

//     for (int i = lenght - 1; i >= index; i--)
//     {
//         a[i+1] = a[i];
//     }
    
//     a[index] = value;
    
//     for (int i = 0; i < lenght; i++)
//     {
//         printf("%d ", a[i]);
//     }
    


//     return 0;
// }









// Copy of an Array

// #include <stdio.h>

// int a[100000], b[100000];

// int main()
// {
//     int lenght1 = 0;
//     int lenght2 = 0;

//     scanf("%d", &lenght1);
    
//     for (int i = 0; i < lenght1; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    
//     printf("Before copy\n");

//     for (int i = 0; i < lenght1; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     printf("\n");

//     for (int i = 0; i < lenght1; i++)
//     {
//         printf("%d ", b[i]);
//     }
    
//     a[2] = 100;

//     for (int i = 0; i < lenght1; i++)
//     {
//         b[i] = a[i];
//     }
    
//     lenght2 = lenght1;

//     printf("\n");

//     printf("After copy\n");

//     for (int i = 0; i < lenght1; i++)
//     {
//         printf("%d ", a[i]);
//     }
    
//     printf("\n");

//     for (int i = 0; i < lenght1; i++)
//     {
//         printf("%d ", b[i]);
//     }

//     return 0;
// }