#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    float numero, soma = 0;

    arquivo = fopen("teste2.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%f", &numero) == 1) {
        soma += numero;
    }


    printf("Soma dos valores: %2f\n", soma);

    fclose(arquivo);

    return 0;
}
