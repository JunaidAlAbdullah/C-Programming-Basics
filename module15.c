#include<stdio.h>
#include<stdlib.h>

int main()
{

    int a = 5, b=6;
    int *x = &a, *y = &b;

    printf("%d %d\n", *x, *y);

//    int temp = *x;

//    *x=*y;
//    *y=temp;
//     *y = temp;

//     printf("%d %d\n", a, b);
    return 0;
}








// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {

//     int *arr = (int *)malloc(5 * sizeof(int));

//     for (int i = 0; i < 5; i++)
//     {
//         arr[i]= i+1;
//     }
    
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//      printf("\n");

//     int *temp = arr;

//     arr = (int *)realloc(arr, 10 * sizeof(int));

//     if (arr == NULL)
//     {
//         arr = temp;
//     }

//     for (int i = 5; i < 10; i++)
//     {
//         arr[i] = 100;
//     }
    
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     free(arr);
  

//     return 0;
// }










// #include <stdio.h>

// int main ()
// {

//     int a = 5;

//     int *x = &a;

//     int **y = &x;

//     printf("%d %d", y, &x);
    
//     return 0;
// }









// Pointers Of Pointer

// #include <stdio.h>

// int main ()
// {

//     int a = 5;

//     int *x = &a;

//     int **y = &x;

//     printf("%d %d", y, &x);
    
//     return 0;
// }










// Implemnting Dynamic Array

// #include<stdio.h>
// #include<stdlib.h>

// int main ()
// {

//     int *arr = (int *)malloc(5 * sizeof(int));
  
//     for (int i = 0; i < 5; i++)
//     {
//         arr[i] = i + 1;
//     }
    

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
    
//     int *temp = arr;

//     arr = (int *)realloc(arr, 10 * sizeof(int));

//     if (arr == NULL)
//     {
//         arr = temp;
//     }
    
//     for (int i = 5; i < 10; i++)
//     {
//         arr[i] = i + 1;
//     }

//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }











// Pointer & Array

// #include<stdio.h>

// int main ()
// {

//     int arr[5] = {1, 2, 3, 4, 5};

//     int *p = arr;

//     printf("%d %d\n", &arr[0], p);

//     printf("%d\n", (p+1));

//     char a = 'a';

//     char *x = &a;

//     printf("%d %d\n", x, x+1);

//     return 0;
// }









// Working with Pointers

// #include<stdio.h>

// int main ()
// {

//     int a = 5, b = 6;
    
//     int *x = &a, *y = &b;

//     printf("%d %d\n", a, b);

//     // dereference

//     int temp = *x;

//     *x = *y;

//     *y = temp;


//     printf("%d %d\n", x, y);

//     return 0;
// }