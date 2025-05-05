#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprime(int *v, int n){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
}

int soma(int *v, int i, int f, int total){
    if(i == f) return total;
    if(i < f){
        total += v[i];
        soma(v, i+1, f, total);
    }
}

void ordena(int *v, int n){
    int aux = 0;
    for(int i=1; i<n; i++){
        if(v[i] > v[i-1]){
            aux = v[i];
            v[i] = v[i-1];
            v[i-1] = aux;

        }
    }
    if(aux == 0){
        return;
    } else {
        ordena(v, n);
    }
}

int main(){
    srand(time(NULL));
    int x[5];
    for(int i=0; i<5; i++){
        x[i] = rand()%10;
    }
    ordena(x, 5);
    imprime(x, 5);
    int r = soma(x, 0, 5, 0);
    printf("Soma = %d\n", r);
    return 0;
}