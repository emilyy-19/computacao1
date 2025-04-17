#include<stdio.h>
int main ()
{

    int num, soma=0;
    float media, countPositivos=0;

    printf("Digite um numero inteiro, ou -1000 para sair: ");
    scanf("%d", &num);


    while (num !=-1000)
    {

        if(num>0)
        {
            soma = soma+num;
            countPositivos++;
        }
        printf("Digite um numero inteiro, ou -1000 para sair: ");
        scanf("%d", &num);

    }
    if (countPositivos>0)
        printf("A media eh %f e a quantidade de valores positivos é %f ", soma/countPositivos, countPositivos);
    return 0;
}
