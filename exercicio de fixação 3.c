#include<stdio.h>
int main()
{

    float n1, n2, n3,
          media;
    int frequencia;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    printf ("Digite a frequencia: ");
    scanf ("%d", &frequencia);

    media = (n1 + n2 + n3) / 3;

    if (media >=8 && frequencia >=75)
    {
        printf("o estudante foi Aprovado com distinção, pois teve media %f e frequencia %d%%.\n ", media, frequencia);
    }
    else if (media >=6 && frequencia >=75)
    {
        printf("O estudante foi Aprovado pois teve media %f e frequencia %d%%.\n", media, frequencia);
    }
    else if ((media >=4 && media <6 && frequencia >=75)||
             (media >=6 && frequencia <=75)||
             (media >=4 && frequencia >=50 && frequencia <75))
    {
        printf("O estudante vai para Final pois teve media %f e frequencia %d%%.\n", media, frequencia);

    }
    else
    {
        printf("O estudante foi Reprovado direto pois teve media %f e frequencia %d%%.\n", media, frequencia);
    }


    return 0;
}
