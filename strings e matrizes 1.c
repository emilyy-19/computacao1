#include <stdio.h>
#include <string.h>

int main ()
{
    char nome [3][100];
    char entrada[100];
    int i, igual=0;

    printf ("Digite os 3 nomes: \n");

    for (i = 0; i< 3 ; i++)
    {
        fgets(nome[i], 100, stdin);

    }

    while(1)
    {
        printf ("Digite um nome:  \n");
        fgets(entrada, 100, stdin);
        igual = 0;



        for ( i=0; i<3; i++)
        {
            if (strcmp (entrada, nome[i])== 0)
                igual = 1;

        }

        if (igual)
        {
            printf ("Este nome esta entre os 3 primeiros \n");

            break;

        }

        else
        {
            printf("Este nome nao esta entre os 3 primeiros \n");

        }

    }

    return 0;

}
