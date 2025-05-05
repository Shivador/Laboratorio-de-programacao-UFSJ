#include <stdio.h>
#include "LDE.h"

int main(){
    Lista *L;
    L = criaLista();

    insereFim(L, 10);
    insereFim(L, 20);
    insereFim(L, 30);
    insereFim(L, 40);
    insereFim(L, 50);
    insereFim(L, 60);
    insereFim(L, 70);
    insereFim(L, 80);
    insereFim(L, 90);

    imprimeLista(L);
    imprimeRev(L);

    imprimeRevRec(L);
    printf("Tamanho da lista: %d\n", tamanho(L));
    int x;
    printf("Digite o número que deseja procurar: ");
    scanf("%d", &x);
    int z = procura(L, x);
    if(z == -1){
        printf("O número %d não existe na lista!\n", x);
    } else {
        printf("O número %d existe na lista e está na posição %d!\n", x, z);
    }
    insereOrdenada(L, 100);
    imprimeLista(L);
    removeElemento(L, 50);
    imprimeLista(L);
    destroiLista(L);
    return 0;
}
