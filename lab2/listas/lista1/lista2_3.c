#include <stdio.h>
#include "lista2_3.h"

int main(){
    Lista *L;
    L = criaLista();

    insereFim(L, "Ana", 19);
    insereFim(L, "Bernardo", 15);
    insereFim(L, "Carol", 12);
    insereFim(L, "Daniel", 16);
    insereFim(L, "Rafael", 25);
    insereOrdenada(L, "Miguel", 22);
    
    int x;
    printf("Digite o número que deseja procurar: ");
    scanf("%d", &x);
    int z = procura(L, x);
    if(z == -1){
        printf("O número %d não existe na lista!\n", x);
    } else {
        printf("O número %d existe na lista e está na posição %d!\n", x, z);
    }

    imprimeLista(L);

    destroiLista(L);
    return 0;
}
