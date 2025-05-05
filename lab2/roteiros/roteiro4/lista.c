#include <stdio.h>
#include "lista.h"

int main(){
    Lista *L;
    L = criaLista();

    insereFim(L, 10);
    insereFim(L, 20);
    insereFim(L, 30);

    removeIni(L);

    insereFim(L, 40);
    insereFim(L, 50);
    insereFim(L, 50);
    insereFim(L, 50);
    insereFim(L, 60);
    insereFim(L, 60);
    insereFim(L, 60);
    insereFim(L, 70);

    imprimeLista(L);

    insereOrdenada(L, 35);

    imprimeLista(L);

    int x;
    scanf("%d", &x);
    int z = procura(L, x);
    if(z == -1){
        printf("O número %d não existe na lista!\n", x);
    } else {
        printf("O número %d existe na lista e está na posição %d!\n", x, z);
    }

    removeElemento(L, x);
    imprimeLista(L);
    destroiLista(L);

    return 0;
}