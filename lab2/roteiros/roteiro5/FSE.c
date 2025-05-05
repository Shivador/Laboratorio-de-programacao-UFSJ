#include <stdio.h>
#include "FSE.h"

int main(){
    Fila *F;
    int elem;
    F = criaFila();

    enfileirar(F, 1);
    enfileirar(F, 2);
    enfileirar(F, 3);
    enfileirar(F, 4);
    enfileirar(F, 5);

    imprime(F);

    verInicio(F, &elem);
    printf("Frente: %d\n", elem);
    desenfileirar(F);

    verInicio(F, &elem);
    printf("Frente: %d\n", elem);
    imprimeRevRec(F);
    imprime(F);

    destroiFila(F);

    return 0;
}