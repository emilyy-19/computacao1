
#include <stdio.h>

int main()
{

    int min, seg, distancia;
    int RitmoMinutos, RitmoSegundos;
    int RestoMinutos, TotalSegundos;

    printf ("Qual foi a distancia percorrida?: ");
    scanf ("%d", &distancia);
    printf ("Em quantos minutos percorreu?: ");
    scanf ("%d", &min);
    printf ("Em quantos segundos percorreu?: ");
    scanf ("%d", &seg);

    RitmoMinutos = min/distancia;
    RestoMinutos = min%distancia;
    TotalSegundos = seg + (RestoMinutos *60);
    RitmoSegundos = TotalSegundos/distancia;

    printf ("seu ritmo medio foi: %d:%d", RitmoMinutos, RitmoSegundos);

    return 0;
}
