#include <stdio.h>
#include "heapPrioridade.h"

int main(){

    FilaP* F;
    F = criaFila();  

    inserirPrio(F, 12, 1);
    imprime(F);

    inserirPrio(F, 27, 2);
    imprime(F);

    inserirPrio(F, 16, 6);
    imprime(F);

    inserirPrio(F, 53, 5);
    imprime(F);

    inserirPrio(F, 45, 8);
    imprime(F);

    inserirPrio(F, 33, 4);
    imprime(F);
    
    printf("---------- Remocoes: ----------\n");
    imprime(F);

    removeIni(F);
    imprime(F);

    removeIni(F);
    imprime(F);

    removeIni(F);
    imprime(F);

    removeIni(F);
    imprime(F);

    removeIni(F);
    imprime(F);
    
    destroiFila(F);
    return 0;
}