#include <stdio.h>
#include "PSE.h"

int main(){
    Pilha *P;
    int elem;
    P = criaPilha();

    empilhar(P, 1);
    empilhar(P, 2);
    empilhar(P, 3);
    empilhar(P, 4);
    empilhar(P, 5);

    imprime(P);

    verTopo(P, &elem);
    printf("Topo: %d\n", elem);
    desempilhar(P);

    verTopo(P, &elem);
    printf("Topo: %d\n", elem);
    imprimeRevRec(P);
    imprime(P);

    destroiPilha(P);

    return 0;
}