#include <stdio.h>
#include <string.h>

int main()
{
    int idade;
    double salario, altura;
    char sexo;
    char nome[11];

    idade = 45;
    salario = 2500.54;
    altura = 1.63;
    sexo = 'F' ;
    strcpy(nome, "Mari Carla"); // strcpy é a fução pra trabalha com string.

    printf("Idade = %d\n",idade);
    printf("Salario = %.2lf\n",salario);
    printf("Altura = %.2lf\n",altura);     // %.2lf significa 2 linhas depois do numero da variável
    printf("Sexo = %c\n",sexo);
    printf("Nome = %s\n",nome);

    return 0;
}
