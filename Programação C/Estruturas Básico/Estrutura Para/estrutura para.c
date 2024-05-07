#include <stdio.h>
int main()
{
    int n, i, x, soma;

    printf("Quantos Numeros Serao Digitados? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Digite Um Numero: ");
        scanf("%d", &x);
        soma = soma + x;
    }
    printf("Soma = %d\n", soma);
    return 0;
    }
