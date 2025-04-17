#include<stdio.h>
int main ()
{

    int num, maior ;

    printf("Digite um numero positivo (entrada), para sair digite 0 ou um numero negativo: ");
    scanf("%d", &num);

    maior = num;

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

