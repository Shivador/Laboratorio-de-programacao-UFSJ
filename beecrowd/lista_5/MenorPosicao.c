#include <stdio.h>
#include <math.h>


int main(){
    int n;
    scanf("%d", &n);
    int X[n];
    int menor = (int)INFINITY;
    int pos = 0;
    for(int i=0; i<n; i++){
        scanf(" %d", &X[i]);
        if(X[i] < menor){
            menor = X[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    

    return 0;
}