#include <stdio.h>
#include <stdlib.h>

int negativos(float *vet, int n){
    int q = 0;
    for(int i=0; i<n; i++){
        if(vet[i] < 0){
            q++;
        }
    }
    return q;
}

int main(){
    float x[] = {1,2,-3,-4,-5};
    int y = negativos(x, 5);
    printf("Quantidade de números negativos = %d\n", y);
    return 0;
}