#include <stdio.h>

int main()
{
    double nt1, nt2, notaf;

    printf("Digite a Primeira Nota: ");
    scanf("%lf", &nt1);

    printf("Digite a Segunda Nota: ");
    scanf("%lf", &nt2);

    notaf = nt1 + nt2;

    if(notaf < 60.00){
        printf("Aluno Reprovado");

    }
    else{
        printf("Nota Final = %.2lf\n" ,notaf);
    }

    return 0;
}

