#include <stdio.h>

int main(){
        int n1, n2;

    printf("Digite dois numeros:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if(n1 < n2){
        printf("CRESCENTE! ");
    }

    else if(n1 == n2){
        printf("IGUAIS! ");
    }

    else{
        printf("DECRESCENTE! ");
    }
        return 0;
}

// mostra uma terceira Amostra se os numeros forem igauis ao invés de terminar
// se forem iguais.
