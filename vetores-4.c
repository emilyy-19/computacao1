#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void preencheVetor(int v[], int n, int lim) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % (lim + 1);
    }
}

int main() {
    int vetor[TAM];

    preencheVetor(vetor, TAM, 10);

    printf("O Vetor gerado e:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
