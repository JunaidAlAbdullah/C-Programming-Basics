#include <stdio.h>

int main()
{
    int lenght;
    scanf("%d", &lenght);

int a[100000], b[100000];

    for (int i = 0; i < lenght; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0, j = lenght - 1; i < lenght; i++, j--)
    {
        b[j] = a[i];
    }

    for (int i = 0; i < lenght; i++)
    {
      if (a[i] != b[i])
      {
        printf("NO\n");
        break;
      }
      else
      {
         printf("YES\n");
      }
    }
       

    return 0;
}