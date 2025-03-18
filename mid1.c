#include <stdio.h>
#include <string.h>

int main() 
{
    char a[10000], b[10000], c[10000];

    scanf("%s %s %s", &a, &b, &c);

    // finding min str
    if (strcmp(a, b) <= 0 && strcmp(a, c) <= 0) 
    {
        printf("%s\n", a);
    } 
    else if (strcmp(b, c) <= 0 && strcmp(b, a) <= 0) 
    {
        printf("%s\n", b);
    } 
    else if(strcmp(c, a) <= 0 && strcmp(c, b) <= 0)
    {
        printf("%s\n", c);
    }

    // finding max str
    if (strcmp(a, b) >= 0 && strcmp(a, c) >= 0) 
    {
        printf("%s\n", a);
    } 
    
    else if (strcmp(b, c) >= 0 && strcmp(b, a) >= 0) 
    {
        printf("%s\n", b);
    } 
    
    else if (strcmp(c, a) >= 0 && strcmp(c, b) >= 0) 
    {
        printf("%s\n", c);
    }

    return 0;
}











// books

// #include <stdio.h>

// int main() 
// {
//     int N, T;
//     scanf("%d %d", &N, &T);

   
//     int times[N];
    
//     for (int i = 0; i < N; i++) 
//     {
//         scanf("%d", &times[i]);
//     }

//     int books = 0;  
//     int TotalTime = 0; 

//     // Calculate the number of books Babul can finish
//     for (int i = 0; i < N; i++) {
//         if (TotalTime + times[i] <= T) 
//         {
//             TotalTime = TotalTime + times[i];
//             books++;
//         } 
//     }

//     printf("%d", books);

//     return 0;
// }











// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int exp[N];

//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &exp[i]);
//     }

//     for (int i = 0; i < N; i++)
//     {
//         if (exp[i] < 1)
//         {
//             printf("Entry-level candidate\n");
//         }
//         else if (exp[i] >= 1 && exp[i] <= 3)
//         {
//             printf("Junior candidate\n");
//         }
//         else if (exp[i] >= 4 && exp[i] <= 7)

//             printf("Mid-level candidate\n");
    
//     else
//     {
//         printf("Senior candidate\n");
//     }
// }

// return 0;
// }











// #do it

// #include <stdio.h>

// int main()
// {
//     int N, K;

//     scanf("%d %d", &N, &K);

//     for (int i = 0; i < N; i++)
//     {

//         for (int j = 1; j <= K; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }

//     return 0;
// }