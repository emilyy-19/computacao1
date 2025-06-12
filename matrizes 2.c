#include <stdio.h>

#define N 5

int main()
{
    int pascal[N][N];


    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            pascal[i][j] = 0;
        }
    }


    for (int i = 0; i < N; i++)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
    }


    printf("Triângulo de Pascal:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
