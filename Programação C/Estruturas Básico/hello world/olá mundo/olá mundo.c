#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Biblioteca para defini��o de configura��es locais

int main() {

    setlocale(LC_ALL,"Portuguese"); // Definiu/Setar o uso de configura��es em portuhues, m�s n�o necess�rio em empresas fora e at� no brasil.

    printf("Ol� Mundo");

    return 0;
}
