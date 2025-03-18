// Palindrom Array

// #include <stdio.h>

// int isPalin(int a[], int i, int j)
// {
//     if (i > j)
//     {
//         return 1;
//     }

//     return a[i] != a[j] && isPalin(a, i + 1, j - 1);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     int a[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     if(isPalin(a, 0, n - 1))
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
    

//     return 0;
// }









// Printing Digits WIth Recursion

// #include <stdio.h>

// void printDigits(int n)
// {
//     if(n == 0)
//     {
//         return;
//     }

//     int digit = n % 10;

//     printDigits(n  / 10);

//     printf("%d ", digit);
// }

// int main()
// {
//     int t;
//     scanf("%d", &t);

//     for (int i = 0; i < t; i++)
//     {
//         int n;
//         scanf("%d", &n);

//         if (n == 0)
//         {
//             printf("0");
//         }
        

//         printDigits(n);

//         printf("\n");
//     }


//     return 0;
// }









// Factorial

// #include <stdio.h>

// long long factorial(int n)
// {
//     if (n == 0)
//     {
//         return 1;
//     }

//     return n * factorial(n-1);
// }


// int main()
// {
//     int n;
//     scanf("%d", &n);

//     printf("%lld\n", factorial(n));

//     return 0;
// }








// Using Pointer variable as Parameter for Array

// #include <stdio.h>
// #include <string.h> //For strlen
// #include <ctype.h> //for toupper

// void fun(int x[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", x[i]);

//         x[0] = -100;
//     }
//     printf("\n");
// }


// int main()
// {
//     int a[5] = {1, 2, 3, 4, 5};

//     fun(a, 5);

//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }









// Passing String in Function

// #include <stdio.h>
// #include <string.h> //For strlen
// #include <ctype.h> //for toupper

// void length(char x[])
// {
//     int n = strlen(x);

//     printf("%d\n", n);
// }

// void makeFirstCharUpper(char x[])
// {
//     x[0] = toupper(x[0]);

//     printf("%s\n", x);
// }

// int main()
// {
//     char a[20] = "programming";

//     length(a);

//     makeFirstCharUpper(a);

//     return 0;
// }










// Passing Array in Function

// #include <stdio.h>

// int fun(int x[], int n)
// {
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum += x[i];
//     }    

//     return sum;
// }

// int main()
// {
//     int a[10] = {1, 8, 4, 5, 3, 2, 4, 1, 5, 3};

//     int result = fun(a, 10);

//     printf("%d", result);

//     return 0;
// }










// Call By Value, Call by Reference

// #include <stdio.h>

// void fun(int x, int *y)
// {
//     x *= 10;
//     *y *= 10;

//     printf("%d %d\n", x, *y);
// }

// int main()
// {
//     int a = 10, b = 20;

//     fun(a, &b);

//     printf("%d %d\n", a, b);



//     return 0;
// }