#include <stdio.h>
#include <stdlib.h>

#define L 5
#define C 5

int main()
{
    int mat[L][C];


    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            mat[i][j] = rand() % 10;
        }
    }


    printf("Matriz original:\n");
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }


    printf("\nMatriz transposta:\n");
    for (int j = 0; j < C; j++)
    {
        for (int i = 0; i < L; i++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
