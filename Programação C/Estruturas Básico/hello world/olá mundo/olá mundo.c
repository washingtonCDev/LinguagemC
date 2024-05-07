#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para definição de configurações locais

int main() {

    setlocale(LC_ALL,"Portuguese"); // Definiu/Setar o uso de configurações em portuhues, más não necessário em empresas fora e até no brasil.

    printf("Olá Mundo");

    return 0;
}
