#include <stdio.h>
int main()
{
    int n;
    double media, soma;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i = 0; i < n; i++){
    printf("digite um numero: ");
    scanf("%lf", &vet[i]);
    }

    printf("\nVALORES: ");
    for(int i = 0; i < n; i++){
        printf("%.1lf ", vet[i]);
    }
    printf("\n");

    soma = 0;
    for(int i = 0; i<n; i++){
    soma = soma + vet[i];
    }

    printf("SOMA = %.2lf\n", soma);

    media = soma /n;
    printf("MEDIA = %.2lf\n", media);

    return 0;
}
