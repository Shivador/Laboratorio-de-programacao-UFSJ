#include <stdio.h>
#include "deque.h"
int main(){
    Deque *D;
    int elem;
    D = criaDeque();

    insereFim(D, 1);
    insereFim(D, 2);
    insereFim(D, 3);
    insereIni(D, 4);
    insereIni(D, 5);

    imprime(D);

    verInicio(D, &elem);
    printf("Inicio: %d\n", elem);
    removeIni(D);

    verFim(D, &elem);
    printf("Fim: %d\n", elem);
    
    imprime(D);
    destroiDeque(D);

    return 0;
}