#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if (a<=b && a<=c)
    {
        if (b<=c)
        {
            printf("%d %d %d\n", a, b, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", a, c, b);
        }
    }

    else if (b<=a && b<=c)
    {
        if (a<=c)
        {
            printf("%d\n%d\n%d\n", b, a, c);
        }
        else
        {
            printf("%d\n%d\n%d\n", b, c, a);
    }
    }
    
    else
    {
        if (a<=b)
        {
           printf("%d\n%d\n%d\n", c, a, b);
        }
        else
        {
        printf("%d\n%d\n%d\n", c, b, a);
        }
    }
    printf("\n");
printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}









// #include <stdio.h>
// int main()
// {
//     long long a, b, k;
//    scanf("%lld %lld %lld", &a, &b, &k);

//     if (a%k == 0 && b%k==0)
//     {
//         printf("Both");
//     }

//     else if (a%k==0)
//     {
//         printf("Memo");
//     }

//     else if(b%k==0)
//     {
//         printf("Momo");
//     }
//     else
//     {
//         printf("No One");
//     }
    

//     return 0;
// }










// #include <stdio.h>
// int main()
// {
//     int a, b;
//     char s;

//     scanf("%d %c %d", &a, &s, &b);
//     if (s == '>')
//     {
//         if (a>b)
//         {
//             printf("Right");
//         }
//         else
//         {
//             printf("Wrong");
//         }
        
//     }
    
//     else if (s == '<')
//     {
//         if (a<b)
//         {
//             printf("Right\n");
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }
    
//     else
//     {
//        if (a==b)
//         {
//             printf("Right\n");
//         }
//         else
//         {
//             printf("Wrong\n");
//         }
//     }

//     return 0;
// }












// #include <stdio.h>
// int main ()
// {
//     char ch;
//     scanf("%c", &ch);

//     if ('a'<=ch && ch<='z')
//     {
//         // lowercase
//         ch -= 32;
//     }
//     else
//     {
//         // uppercase
//         ch += 32;
//     }

//     printf("%c\n", ch);

//     return 0;
// }