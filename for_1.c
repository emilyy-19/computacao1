#include <stdio.h>
int main()
{
   int n, i=1;

   printf("Digite um numero inteiro: ");
   scanf("%d", &n);

    for (i = 1; i<=200; i=i+1)
    {
      if (i%2==0 && i%n==3)
     {
        printf("%d\n",i);
     }

    }

   return 0;
}
