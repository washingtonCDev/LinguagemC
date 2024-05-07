#include <stdio.h>
void limpar_entrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(){
    double c,f;
    char resp;

    do{
        print("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente a Farenheit: %.2lf\n", f);
        printf("Desenja Reetir (S/N)? ");
        limpar_entrada();
        scanf("%c", &resp);
    }
        while (resp == 's');
return 0;
}
