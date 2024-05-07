#include <stdio.h>


int main()
{

    int x, soma;

    soma = 0;
    printf("Digite Um Numero: ");
    scanf("%d", &x);

    while (x != 0)
    {
        soma = soma + x;
        printf("Digite Outro Numero: ");
        scanf("%d", &x);
    }

    printf("Soma = %d\n", soma);

    return 0;
}
