#include<stdio.h>
int main ()
{

    int num, maior = 0;

    printf("Digite um numero positivo (entrada), para sair digite 0 ou um numero negativo: ");
    scanf("%d", &num);


    while (num > 0)
    {
        if(num > maior)
        {
            maior = num;
        }
        printf ("digite outro numero, ou 0 para sair: ", num);

        scanf ("%d", &num);
    }
    printf("Maior numero digitado : %d\n", maior);

    return 0;
}

