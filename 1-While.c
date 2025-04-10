#include <stdio.h>
int main()
{
   int n, i=1;

   printf("Digite um numero inteiro: ");
   scanf("%d", &n);

   while(i<=200){
      if (i%2==0 && i%n==3){
        printf("%d\n",i);
      }
      i=i+1;
   }

   return 0;
}
