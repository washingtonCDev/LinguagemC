#include <stdio.h>
#include <string.h>

void limpar_entrada() {     //função para limpar o buffer de entrada, quando o programa ja leu um dado e deixou quebra de linha pendente aí usamos esta função.
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int lenght){ // função para não usarmos o strtok nem o fgets juntos agora apenas  ler_texto(nome1ou2, 50);.
    fgets(buffer, lenght, stdin);
    strtok(buffer, "\n");
}

//assim a primeira função limpa entrada e a segunda executa o fgets e strtok economizamos dois codiogos em uma linha só.

int main()
{

    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Digite Idade1: ");
    scanf("%d", &idade1);
    printf("Digite Nome1: ");
    limpar_entrada();
    ler_texto(nome1, 50);

    printf("Digite Idade2: ");
    scanf("%d", &idade2);
    printf("Digite Nome2: ");
    limpar_entrada();
    ler_texto(nome2, 50);


    printf("Idade1: %d\n", idade1);
    printf("Nome1: %s\n", nome1);
    printf("Idade2: %d\n", idade2);
    printf("Nome2: %s\n", nome2);

    return 0;
}
