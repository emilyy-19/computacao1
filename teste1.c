#include<stdio.h>

int CalculoDigitoVerificador(int num)
{
    int centena = num/100;
    int dezena = num/10 %10;
    int unidade = num %100 %10;

    int soma = 1*centena + 2*dezena + 3*unidade;
    return (soma %11) %10;
}

int main()
{

    int numero;

    printf ("Digite um numero de 3 digitos: ");
    scanf ("%d", &numero);

    int verificador = CalculoDigitoVerificador(numero);

    printf("verificador: %d\n", verificador);
    return 0;
}
