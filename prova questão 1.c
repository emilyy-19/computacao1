#include <stdio.h>

int main(){

float base, altura;
float perimetro_total, perimetro_porta;
float largura_porta = 0.8;
float area;


printf ("Digite a altura (em metros) do quarto: ");
scanf ("%f", &altura);
printf ("Digite o valor (em metros) da base do quarto: ");
scanf ("%f", &base);

perimetro_total = 2*(base+altura);
perimetro_porta = perimetro_total - largura_porta;
area = altura*base;

printf ("perimetro Total: %.2f\n", perimetro_total);

printf ("perimetro com a porta: %.2f\n", perimetro_porta);

printf ("a area do quarto eh: %.2f\n", area);

return 0;
}
