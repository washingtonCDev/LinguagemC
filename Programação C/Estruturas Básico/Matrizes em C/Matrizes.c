#include<stdio.h>

int main()
{

    int l,c,i,j; // L(linhas) C(colunas) i e j para o for //
    printf("Quantas linhas? ");
    scanf("%d",&l);
    printf("quantas colunas? ");
    scanf("%d",&c);

    int mat[l][c]; // igual um vetor más com dois valores //

    for(i = 0; i < l; i++) // para percorrer as Linhas //
    {
    for (j = 0; j < c; j++) // para percorrer as Colunas //
    {
    printf("Elemento [%d,%d]: ",i , j);
    scanf("%d", &mat[i][j]); // espaço no placeholder do scanf resulta em um pedido de elemento a mais que estava me dando erro //
    }
    }
    printf("\nMatriz Digitada:\n");
    for(i = 0; i < l; i++){
    for(j = 0; j < c; j++){

    printf("%d ", mat[i][j]); // no print o espaço é necessario para não ficarem grudados //
    }
    printf("\n");
    }
    return 0;
}
