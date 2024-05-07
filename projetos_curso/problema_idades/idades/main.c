#include <stdio.h>

// Este programa mostra a média de idades das deuas pessoas //

void limpar_entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main()
{
    double media, id1, id2;
    char nome1[30], nome2[30];

    printf("Digite Os Dados da Primeira Pessoa: \n");
    printf("Nome: ");
    gets(nome1);                //gets
    printf("Idade:");
    scanf("%lf",&id1);
    printf("\n");

    limpar_entrada();// para ler um char[] depois de ler outro tipo temos que limpar o buffer //

    printf("Digite Os Dados da Segunda pessoa: \n");
    printf("Nome: ");
    gets(nome2);
    printf("Idade: ");
    scanf("%lf",&id2);
    printf("\n");

    media = (id1 + id2) / 2;

    printf("Media de idades: %.2lf", media);

    return 0;
}
