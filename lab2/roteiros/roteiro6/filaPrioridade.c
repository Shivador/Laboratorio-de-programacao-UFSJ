#include <stdio.h>
#include "filaPrioridade.h"

int main(){

    FilaP* F;
    F = criaFila();

    inserirPrio(F, 33, 1);
    imprime(F);

    inserirPrio(F, 16, 3);
    imprime(F);

    inserirPrio(F, 45, 3);
    imprime(F);

    inserirPrio(F, 11, 5);
    imprime(F);

    inserirPrio(F, 11, 2);
    imprime(F);

    destroiFila(F);
    return 0;
}