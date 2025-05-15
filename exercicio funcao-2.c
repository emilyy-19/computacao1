#include<stdio.h>
#include<math.h>

int arredonda(float x)
{
    if (x > 0)
    {

        return (int)(x + 0.5);
    }
    else
    {

        return (int)(x - 0.5);
    } }
    int main()
    {
        float valor;

        printf ("Digite o valor: ");
        scanf ("%f", &valor);

        int resultado = arredonda (valor);

        printf ("Arredondado %d\n", resultado);
        return 0;
    }
