#include<stdio.h>
int ultimosDigitosIguais(numero1, numero2)
{
    int flag = 1;
    while(numero1>0 && numero2>0)
    {
        if ((numero1%10)!=(numero2%10))
        {
            return 0;
        }

        {
            numero1 = numero1/10;
            numero2 =numero2/10;
        }

    }
    return flag;

}

int main ()
{

    int a, b;

    printf("Digite o valor de a: ");
    scanf ("%d", &a);

    printf ("Digite o valor de b: ");
    scanf("%d", &b);

    if (ultimosDigitosIguais(a,b))
    {
        printf ("b corresponde aos ultimos digitos de a (sim)\n");
    }

    else
    {

        printf("b nao corresponde aos ultimos digitos de (nao)\n");

    }
    return 0;
