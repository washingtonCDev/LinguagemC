#include <stdio.h>

int main()
{
  int x, y, soma, troca;
  printf("Digite dois numeros:\n");
  scanf("%d %d", &x, &y);//usa uma só linha

    if(x > y){
        troca = x;
        x = y;
        y = troca;}

        soma = 0;
    for (int i = x+1; i < y; i++){
        if(i % 2 != 0){
            soma += i;}
    }
    printf("A soma dos numeros impares entre %d e %d é: %d\n",x,y,soma);

  return 0;
}
