#include <stdio.h>

int main()
{

    int num_base, valor_inicial, valor_final, i;
    int  soma = 0;

    printf ("Digite um número inteiro de base: ");
    scanf ("%d", &num_base);
    printf ("Digite o valor inicial do intervalo: ");
    scanf ("%d", &valor_inicial);
    printf ("Digite o valor final do intervalo; ");
    scanf ("%d", &valor_final);

    for(i=valor_inicial; i<=valor_final; i=i+1)
    {
        if (i%num_base == 0)
        {

            soma += i;
        }

    }
    printf (" A soma dos multiplos de %d entre %d e %d eh: %d\n", num_base, valor_inicial, valor_final, soma);

    return 0;
}
