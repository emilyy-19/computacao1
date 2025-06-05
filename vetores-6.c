#include <stdio.h>
#define TAM 5

void imprimeDireto(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

void imprimeInverso(int v[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
    int vetor[TAM] = {3, 6, 9, 12, 15};

    printf("Esse eh o Vetor na ordem direta:\n");
    imprimeDireto(vetor, TAM);

    printf("Esse eh o Vetor na ordem inversa:\n");
    imprimeInverso(vetor, TAM);

    return 0;
}
