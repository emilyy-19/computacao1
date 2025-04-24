#include <stdio.h>
int main ()
{

    float largura, altura;
    float area;
    int litros_tinta;

    printf ("Digite a altura da parede (em metros): ");
    scanf ("%f", &altura);
    printf ("Digite a largura da parede (em metros): ");
    scanf ("%f", &largura);

    area = (altura * largura);
    litros_tinta = ceil (area/2);

    printf ("A area da parede eh: %.2f\n", area);
    printf ("A quantidade de litros de tinta necessaria para pintar a parede eh: %d", litros_tinta);

    return 0;
}
