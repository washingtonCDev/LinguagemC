#include <stdio.h>
#include <string.h>

void limpar_entrada() {     //fun��o para limpar o buffer de entrada, quando o programa ja leu um dado e deixou quebra de linha pendente a� usamos esta fun��o.
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade;
    double salario, altura;
    char nome[50];
    char sexo;

    printf("Digite Sua Idade: ");
    scanf("%d", &idade);

    printf("Digite Seu Salario: ");
    scanf("%lf", &salario);

    printf("Digite Sua Altura: "); // Deve ter o & para indicar a posi��o da Var na mem�ria //
    scanf("%lf", &altura);

    printf("Digite Seu Sexo F ou M: ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("Digite Seu Nome: ");
    limpar_entrada();          //  para chamar a fun��o limpar entrada para agir neste ponto do codigo //

    fgets(nome, 50, stdin);    // forma de usar o fgets (var, numero int tamanho do que vai ler, stdin) o ultimo � o arquivo de onde vc est� lendo/fonte de dados que esta lendo -
                               // neste caso � a entrada padr�o stdin que l� no terminal.

    printf("\n");
    printf("Idade: %d\n", idade);
    printf("Salario: %.2lf\n", salario);
    printf("Altura: %.2lf\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Nome: %s", nome);

    return 0;
}
