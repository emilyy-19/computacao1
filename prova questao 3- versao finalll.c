#include<stdio.h>
int main()
{

    int  forca, nivel;
    float multiplicador, danoTotal;

    printf("Digite a forca do seu personagem (numero inteiro de 1 a 100):  ");
    scanf("%d", &forca);
    printf("Digite o nivel da arma do seu personagem(numero inteiro de 1 a 50):  ");
    scanf("%d", &nivel);
    printf("Digite o numero do multiplicador de critico(numero real de 1.0 a 2.0):  ");
    scanf("%f", &multiplicador);


    danoTotal= forca*nivel*multiplicador;


    if (danoTotal >5000)
    {

        printf("O dano Total é de %f: DANO CRITICO MASSIVO\n", danoTotal);
    }
    else if (danoTotal >=1000 <=5000)
    {
        printf("O dano Total eh de %2.f: DANO CRITICO\n", danoTotal);
    }
    else
    {

        printf("O dano Total é de %f: DANO NORMAL\n", danoTotal);
    }





    return 0;
}
