#include <stdio.h>

int main(){
                                    // PLACEHOLDERS
    int idade;                      //    D
    char sexo;                      //    C
    char nome [20];                 //    S
    double salario;                 //    F

    idade = 25;
    sexo = 'F';
    strcpy(nome, "Mariana Diaz");
    salario = 2250.98;

    printf(" A Funcionaria: %s\n Sexo: %c\n Tem: %d Anos\n Recebe: %.2lf de salario\n", nome, sexo, idade, salario);

    return 0;
}
