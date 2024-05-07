#include <stdio.h>
int main(){
        int n1, n2;

        printf("Digite dois numeros:\n");
        scanf("%d", &n1);
        scanf("%d", &n2);

        while(n1 != n2){
            if(n1 < n2){
                printf("Crescente!\n");
            }
            else{
                printf("Decrescente\n");
            }
            printf("Digite outos dois numeros:\n");
            scanf("%d", &n1);
            scanf("%d", &n2);

        }
    return 0;
}
