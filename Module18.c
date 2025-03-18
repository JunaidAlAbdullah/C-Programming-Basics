// Sum of an Array (another approach)

// #include <stdio.h>

// int a[100000], sum;

// int getSum(int i, int n)
// {
//     if(i==n)
//     {
//         return 0;
//     }

//     return a[i] + getSum(i+1, n);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     int ret = getSum(0, n);

//     printf("%d", ret);
    
// }










// Sum of an Array

// #include <stdio.h>

// int a[100000], sum;

// void goToIndex(int i, int n)
// {
//     if(i==n)
//     {
//         return;
//     }

//     sum += a[i];

//     goToIndex(i+1, n);
// }

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     sum = 0;

//     goToIndex(0, n);

//     printf("%d", sum);
    
// }










// Printing N to 1

// #include<stdio.h>

// void func(int x, int n)
// {
//     if(x > n)
//     {
//         return;
//     }
    
//     printf("%d\n", x);

//     func(x + 1, n);
// }

// int main()
// {
//     func(1, 10);

//     return 0;
// }









// Understanding Call Flow and Return

// #include<stdio.h>

// void func2()
// {
//     printf("Inside Func2\n");
// }

// void fun1()
// {
//     printf("Before function call (inside func1)\n");

//     func2();

//     printf("After function call (inside func1)\n");
// }

// int main()
// {
//     printf("Before function call in main\n");

//     fun1();

//     printf("After function call in main\n");

//     return 0;
// }






// Print 1 To N (recursion)

// #include <stdio.h>

// void fun(int x, int n)
// {
//     if(x > n)
//     {
//         return;
//     }
//     printf("%d\n", x);

//     printf("Befor function call, current x = %d\n", x);

//     fun(x + 1, n);

//     printf("Befor function call, current x = %d\n", x);
// }

// int main()
// {

//     printf("Befor function call in main\n");
   
//     fun(1, 6);

//     printf("After function call in main\n");

//     return 0;
// }