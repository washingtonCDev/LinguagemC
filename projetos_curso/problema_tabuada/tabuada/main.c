#include <stdio.h>

int main() {
    int n, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    printf("Tabuada de %d:\n", n);
    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i); //  para não precisar usar produto = n * i e mostrar a variavel produto
     }                                         // este caso fica mais simples.

    return 0;
}
