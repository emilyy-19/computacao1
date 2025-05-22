#include <stdio.h>

void converteHora(int total_segundos, int *hora, int *min, int *seg)
{

    *hora= total_segundos/3600;
    total_segundos = total_segundos %3600;
    *min = total_segundos/60;
    *seg = total_segundos%60;
}

int main()
{
    int total, hh, mm, ss;

    printf("Digite o total de segundos: ");
    scanf ("%d", &total);
    printf ("O total de segundos digitados foi: %d\n", total);

    converteHora (total, &hh, &mm, &ss);

    printf("A hora convertida eh : %02d: %02d: %02d\n", hh, mm, ss);

    return 0;
}




