#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche(int *v, int i, int f){
    if(i == f) return;
    if(i < f){
        v[i] = rand()%10;
        preenche(v, i+1, f);
    }
}

void imprime(int *v, int i, int f){
    if(i == f){
        printf("\n"); 
        return;
    }
    if(i < f){
        printf("%d ", v[i]);
        imprime(v, i+1, f);
    }
    if(i > f){
        printf("%d ", v[i]);
        imprime(v, i-1, f);
    }
}

int busca(int *v, int i, int f, int maior){
    if(i == f) return maior;
    if(i < f){
        if(v[i] > maior){
            maior = v[i];
            busca(v, i+1, f, maior);
        } else {
            busca(v, i+1, f, maior);
        }
    }
}

int main(){
    srand(time(NULL));
    int x[5];
    preenche(x, 0, 5);
    imprime(x, 0, 5);
    imprime(x, 4, -1);
    int r = busca(x, 0, 5, 0);
    printf("Maior valor do vetor = %d\n", r);
    return 0;
}