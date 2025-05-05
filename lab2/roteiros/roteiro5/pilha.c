#include <stdio.h>
#include "pilha.h"
int main(){
    Pilha *P;
    int n;
    int *p;
    do{
        scanf("%d", &n);
        if(n == 1) P = criaPilha();
        if(n == 2){
            int elem;
            scanf("%d", &elem);
            empilhar(P, elem);
        } 
        if(n == 3) verTopo(P, p);
        if(n == 4) desempilhar(P);
        if(n == 5) imprime(P);
        if(n == 6) destroiPilha(P);
    }while(n != 7);
    imprimeRev(P);
    return 0;
}