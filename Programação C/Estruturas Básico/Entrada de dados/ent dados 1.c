#include <stdio.h>
#include <string.h>

            // entrada de dados SCANF
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

    printf("Digite Sua Altura: "); // Deve ter o & para indicar a posi��o da Var na mem�ria
    scanf("%lf", &altura);



    printf("Digite Seu Nome: ");
    ("%s", nome);        // scanf neste caso funciona se for para ler uma palavra inteira sem espa�o ELE n�o funciona para texto com espa�os.


    fseek(stdin,0,SEEK_END); //  Se houver uma quebra de linha pendente na entrada padr�o, � preciso limpar antes:
    printf("Digite Seu Sexo F ou M: ");
    ("%c", &sexo);

    printf("%");
    printf("%");
    printf("%");
    printf("%");
    printf("%c");


    return 0;
}
