
#include <stdio.h>
#include <stdlib.h>

#define L 10
#define C 10

int main() {
    int mat[L][C];
    int i, j;


    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            mat[i][j] = rand() % 100;
        }
    }

    // matriiiiiiz
    printf("Matriz gerada:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%2d ", mat[i][j]);
        }
        printf("\n");
    }

    // maior elemento
    int maior = mat[0][0];
    int l_maior = 0, c_maior = 0;

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                l_maior = i;
                c_maior = j;
            }
        }
    }

    //menor elemento
    int minimax = mat[l_maior][0];
    int c_minimax = 0;

    for (j = 1; j < C; j++) {
        if (mat[l_maior][j] < minimax) {
            minimax = mat[l_maior][j];
            c_minimax = j;
        }
    }

    // reeesuuultadoooo
    printf("\nMaior elemento da matriz: %d (linha %d, coluna %d)\n", maior, l_maior, c_maior);
    printf("Elemento minimax (menor da linha do maior): %d (linha %d, coluna %d)\n", minimax, l_maior, c_minimax);

    return 0;
}
