#include <stdio.h>

int main()
{
    double largura, comprimento, valor, area, preco;

    printf("Digite a Largura do Terreno: ");
    scanf("%lf", &largura);

    printf("Digite o Comprimento do Terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o Valor do Metro Quadrado: ");
    scanf("%lf", &preco);

    area = largura * comprimento;
    valor = area * preco;

    printf("Area do Seu Terreno: %.2lf\n", area);
    printf("Seu Terreno Custa: %.2lf\n",valor);

    return 0;
}
