#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

  printf("Digite a Base do Retangulo: ");
  scanf("%lf", &base);
  printf("Digite a Altura do Retangulo: ");
  scanf("%lf", &altura);

  printf("\n");

  area = base * altura;
  perimetro = 2 * (base + altura);
  diagonal = sqrt(pow(base, 2.0) + (pow(altura, 2.0)));

  printf("Área Do Retângulo: %lf\n",area);
  printf("Perimetro: %lf\n",perimetro);
  printf("Diágonal: %lf\n",diagonal);

    return 0;
}
