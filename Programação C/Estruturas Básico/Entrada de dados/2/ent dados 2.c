#include <stdio.h>
#include <string.h>

void limpar_entrada() {     //função para limpar o buffer de entrada, quando o programa ja leu um dado e deixou quebra de linha pendente aí usamos esta função.
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

    printf("Digite Sua Altura: "); // Deve ter o & para indicar a posição da Var na memória //
    scanf("%lf", &altura);

    printf("Digite Seu Sexo F ou M: ");
    limpar_entrada();
    scanf("%c", &sexo);

    printf("Digite Seu Nome: ");
    limpar_entrada();          //  para chamar a função limpar entrada para agir neste ponto do codigo //

    fgets(nome, 50, stdin);    // forma de usar o fgets (var, numero int tamanho do que vai ler, stdin) o ultimo é o arquivo de onde vc está lendo/fonte de dados que esta lendo -
                               // neste caso é a entrada padrão stdin que lê no terminal.

    printf("\n");
    printf("Idade: %d\n", idade);
    printf("Salario: %.2lf\n", salario);
    printf("Altura: %.2lf\n", altura);
    printf("Sexo: %c\n", sexo);
    printf("Nome: %s", nome);

    return 0;
}
