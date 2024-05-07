#include<stdio.h>
#include<string.h>

int main()
{
    int hora;
    printf("Digite Sua Hora: ");
    scanf("%d", &hora);

    if (hora <0 || hora > 24)
    {
        printf("Hora invalida!");
    }
    else
    {
        if (hora <= 12)
        {
            printf("Bom Dia!");
        }
        else if(hora <= 18)
        {
            printf("Boa Tarde!");
        }
        else
        {
            printf("Boa Noite!");
        }
    }
}
