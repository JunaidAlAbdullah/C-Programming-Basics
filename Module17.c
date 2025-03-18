// Pointers with Function

// #include <stdio.h>

// void swap(int *x, int *y) // reference of a,b
// {
//     printf("Func: %p %p\n", x,y);
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }

// int main()
// {
//     int a = 5, b = 6;

//     swap(&a, &b);

//     printf("Main : %p %p\n", &a, &b);

//     printf("%d %d\n", a, b);

//     return 0;
// }










//  Variable Scope



// #include <stdio.h>

// void add(int a, int b)
// {
//     printf("Inside Function: %p %p\n", &a, &b);
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a =5, b = 6;

//     printf("%p %p\n", &a, &b);

//     add(a,b);

//     printf("%d %d\n", a, b);

//     return 0;
// }











// Usefull Built in Functions

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double a = 10.6;

//     printf("%lf\n", ceil(a));

//     printf("%lf\n", floor(a));

//     printf("%lf\n", round(a));

//     printf("%lf\n", sqrt(a));

//     printf("%lf\n", pow(a, 2));



//     return 0;
// }










// No Return + No Parameter

// #include <stdio.h>

//  void add()
//  {
    
//     int a, b;

//     scanf("%d %d", &a, &b);

//     printf("Function Called\n");

//     int sum = a + b;

//     printf("%d\n", sum);

//     return;
//  }



// int main()
// {

//     add();    

//     return 0;
// }











// No Return + Parameter

// #include <stdio.h>

//  void add(int a, int b)
//  {
//     printf("Function Called\n");

//     int sum = a + b;

//     printf("%d\n", sum);

//     return;
//  }

// void alphaCheck(char c)
// {
//     if('a'<= c && c <= 'z') 
//     {
//         printf("lower\n");
//     }

//     else 
//     {
//         printf("Upper\n");
//     }
// }

// int main()
// {
//     int a, b;

//     scanf("%d %d", &a, &b);

//     add(a, b);    

//     alphaCheck('a');

//     alphaCheck('F');

//     return 0;
// }









/*
return_type function_name(parameterts)
{
    statements;

    return result;
}
*/
// .......


// int add(int a, int b)
// {
//     int sum = a + b;
//     return sum;
// }

// int main()
// {
//     int result = add(10, 20);

//     printf("%d\n", result);

//     return 0;
// }