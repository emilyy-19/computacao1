#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE*arquivo;
    char linha[300];

    arquivo = fopen("teste1.txt", "r");

    if(arquivo== NULL)
    {
        printf("Nao foi possivel ler o arquivo\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo))
    {
        printf("%s\n", linha);
    }
    fclose(arquivo);

    return 0;
}
