#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int maior(int *v, int n){
    int maior = 0;
    for(int i=0; i<n; i++){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

int menor(int *v, int n){
    int menor = (int)INFINITY;
    for(int i=0; i<n; i++){
        if(v[i] < menor){
            menor = v[i];
        }
    }
    return menor;
}

int media(int *v, int n){
    int soma = 0;
    for(int i=0; i<n; i++){
        soma += v[i];
    }
    return soma/n;
}

int main(){
    srand(time(NULL));
    int vet1[5], vet2[5];
    for(int i=0; i<5; i++){
        vet1[i] = rand()%10;
        vet2[i] = rand()%10;
    }
    printf("Maior elemento V1 = %d\n", maior(vet1, 5));
    printf("Maior elemento V2 = %d\n", maior(vet2, 5));
    printf("Menor elemento V1 = %d\n", menor(vet1, 5));
    printf("Menor elemento V2 = %d\n", menor(vet2, 5));
    printf("Media elemento V1 = %d\n", media(vet1, 5));
    printf("Media elemento V2 = %d\n", media(vet2, 5));

    return 0;
}