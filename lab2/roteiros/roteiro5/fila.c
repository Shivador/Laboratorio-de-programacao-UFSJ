#include <stdio.h>
#include "fila.h"
int main(){
    Fila *F;
    int n;
    int *p;
    do{
        scanf("%d", &n);
        if(n == 1) F = criaFila();
        if(n == 2){
            int elem;
            scanf("%d", &elem);
            enfileirar(F, elem);
        } 
        if(n == 3) verInicio(F, &p);
        if(n == 4) desenfileirar(F);
        if(n == 5) imprime(F);
        if(n == 6) destroiFila(F);
    }while(n != 7);
    
    return 0;
}