#include<stdio.h>
#include<math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta;

    delta = b*b-4*a*c;

    printf ("delta: %f\n", delta);
    if(delta<0)
    {

        return 0;
    }
    else if (delta == 0)
    {
        *x1 = (-b/2*a);
        return 1;
    }
    else
    {
        float temp=-b+sqrt(delta);

        *x1 = temp /2*a;
        *x2 = (-b-sqrt(delta))/2*a;
        return 2;
    }
}
int main()
{
    float a , b ,c, r1,r2;
    int qntd;

    printf ("Digite os valores de a,b,c: ");
    scanf ("%f %f %f", &a, &b, &c);

    qntd=calcula_raizes (a,b,c,&r1,&r2);

    if (qntd == 0)
    {
        printf("NENHUMA raiz real encontrada\n");
    }
    else if(qntd==1)
    {
        printf("Apenas UMA raiz encontrada, a raiz eh: %f\n", r1);
    }
    else
    {
        printf("DUAS raizes encontradas, as raizes sao: %f e %f\n", r1, r2);
    }

    return 0;
}
