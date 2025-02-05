#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int tipo;
    float distancia;
} Rodovia;

Rodovia** criaMatriz(int n){
    Rodovia **r = (Rodovia**)malloc(sizeof(Rodovia*) * n);
    for(int i=0; i<n; i++){
        r[i] = (Rodovia*)malloc(sizeof(Rodovia) * n);
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            r[i][j].tipo = 0;
            r[i][j].distancia = 0;
        }
    }
    return r;
}

float quilometragemTipoTotal(Rodovia **M, int n, int tipo){
    float total;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(M[i][j].tipo == tipo){
                total += M[i][j].distancia;
            }
        }
    }
    return total/2;
}

void desalocaMatriz(Rodovia **M, int n){
    for(int i=0; i<n; i++){
        free(M[i]);
    }
    free(M);
}   



int main(){
    int n;
    scanf("%d", &n);
    Rodovia **rodovia = criaMatriz(n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d/%f", &rodovia[i][j].tipo, &rodovia[i][j].distancia);
        }
    }
    float federal = quilometragemTipoTotal(rodovia, n, 2);
    printf("%.1f\n", federal);
    desalocaMatriz(rodovia, n);
    return 0;
}