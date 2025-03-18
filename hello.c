// #include <stdio.h>

// int main() {
//     char operator;
//     int num1, num2, result;

//     // printf("Enter an operator (+, -, *, /, %%): ");
//     scanf("%c", &operator);

//     // printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     switch (operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result: %d + %d = %d\n", num1, num2, result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result: %d - %d = %d\n", num1, num2, result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result: %d * %d = %d\n", num1, num2, result);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("Result: %d / %d = %d\n", num1, num2, result);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         case '%':
//             if (num2 != 0) {
//                 result = num1 % num2;
//                 printf("Result: %d %% %d = %d\n", num1, num2, result);
//             } else {
//                 printf("Error: Modulus by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Error: Invalid operator.\n");
//             break;
//     }

//     return 0;
// }




// #include <stdio.h>

// int main() {
//     int number, count = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     if (number == 0) {
//         count = 1; // Special case for 0
//     } else {
//         if (number < 0) {
//             number = -number; // Make the number positive
//         }
//         for (int temp = number; temp != 0; temp /= 10) {
//             count++; // Increment the digit count
//         }
//     }

//     printf("The number of digits is: %d\n", count);

//     return 0;
// }























// // #include <stdio.h>

// // int main() {
// //     char operator;
// //     int num1, num2, result;

// //     printf("Enter an operator (+, -, *, /, %%): ");
// //     scanf(" %c", &operator);

// //     printf("Enter two integers: ");
// //     scanf("%d %d", &num1, &num2);

// //     switch (operator) {
// //         case '+':
// //             result = num1 + num2;
// //             printf("Result: %d + %d = %d\n", num1, num2, result);
// //             break;
// //         case '-':
// //             result = num1 - num2;
// //             printf("Result: %d - %d = %d\n", num1, num2, result);
// //             break;
// //         case '*':
// //             result = num1 * num2;
// //             printf("Result: %d * %d = %d\n", num1, num2, result);
// //             break;
// //         case '/':
// //             if (num2 != 0) {
// //                 result = num1 / num2;
// //                 printf("Result: %d / %d = %d\n", num1, num2, result);
// //             } else {
// //                 printf("Error: Division by zero is not allowed.\n");
// //             }
// //             break;
// //         case '%':
// //             if (num2 != 0) {
// //                 result = num1 % num2;
// //                 printf("Result: %d %% %d = %d\n", num1, num2, result);
// //             } else {
// //                 printf("Error: Modulus by zero is not allowed.\n");
// //             }
// //             break;
// //         default:
// //             printf("Error: Invalid operator.\n");
// //             break;
// //     }

// //     return 0;
// // }





// // Summation

// // #include <stdio.h>

// // int sum(int a, int b)
// // {
// //     int add = a + b;

// //     return add;
// // }

// // int main()
// // {  
// //     int a, b;

// //     scanf("%d %d", &a, &b);

// //     int result = sum(a, b);

// //     printf("%d\n", result);

// //     return 0;
// // }








// // Swap

// // #include <stdio.h>

// // void swap(int *a, int *b)
// // {
// //     int temp = *a;

// //     *a = *b;

// //     *b = temp;
// // }

// // int main()
// // {  
// //     int a, b;

// //     scanf("%d %d", &a, &b);

// //     swap(&a, &b);

// //     printf("%d %d\n", a, b);

// //     return 0;
// // }









// // Print Recursion

// // #include <stdio.h>

// // void func(int N)
// // {
// //     if(N == 0)
// //     {
// //        return;
// //     }
// //     else
// //     {
// //         printf("I love Recursion\n");
        
// //         func(N-1);
// //     }
// // }

// // int main()
// // {  
// //     int N;

// //     scanf("%d", &N);

// //     func(N); //call

// //     return 0;
// // }










// // N to 1

// // #include <stdio.h>

// // void func(int N)
// // {
// //     if(N == 1)
// //     {
// //         printf("%d\n", N);
// //     }
// //     else
// //     {
// //         printf("%d ", N);
        
// //         func(N-1);
// //     }
// // }

// // int main()
// // {  
// //     int N;

// //     scanf("%d", &N);

// //     func(N); //call

// //     return 0;
// // }








// // 1 to N

// // #include <stdio.h>

// // void func(int N)
// // {
// //     if(N == 1)
// //     {
// //         printf("%d\n", N);
// //     }
// //     else
// //     {
// //         func(N-1);

// //         printf("%d ", N);
// //     }
// // }

// // int main()
// // {  
// //     int N;

// //     scanf("%d", &N);

// //     func(N); //call

// //     return 0;
// // }






