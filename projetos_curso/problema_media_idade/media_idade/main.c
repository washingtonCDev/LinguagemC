#include <stdio.h>

int main(){

    int id, cont, soma;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &id);

    soma = 0;
    cont = 0;

    while (id >= 0){
        soma = soma + id;
        cont = cont + 1;
        scanf("%d", &id);
    }
    if (cont == 0){
        printf("Impossivel calcular");
    }
    else{
        media = (double)soma/cont;    // CASTING // vai fazer soma double pra dividir com cont e resultado double //
        printf("MEDIA = %.2lf", media);
    }

    return 0;
}
