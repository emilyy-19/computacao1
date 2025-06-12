#include <stdio.h>

#define N 3

int main() {
    int mat[N][N];
    int i, j;
    int soma_ref, soma;

    printf("Digite os elementos da matriz %dx%d:\n", N, N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    soma_ref = 0;
    for (j = 0; j < N; j++) {
        soma_ref += mat[0][j];
    }

    for (i = 1; i < N; i++) {
        soma = 0;
        for (j = 0; j < N; j++) {
            soma += mat[i][j];
        }
        if (soma != soma_ref) {
            printf("Nao eh quadrado magico.\n");
            return 0;
        }
    }

    for (j = 0; j < N; j++) {
        soma = 0;
        for (i = 0; i < N; i++) {
            soma += mat[i][j];
        }
        if (soma != soma_ref) {
            printf("Nao eh quadrado magico.\n");
            return 0;
        }
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        soma += mat[i][i];
    }
    if (soma != soma_ref) {
        printf("Nao eh quadrado magico.\n");
        return 0;
    }

    soma = 0;
    for (i = 0; i < N; i++) {
        soma += mat[i][N - 1 - i];
    }
    if (soma != soma_ref) {
        printf("Nao eh quadrado magico.\n");
        return 0;
    }

    printf("Eh quadrado magico!\n");
    return 0;
}
