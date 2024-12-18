#include <stdio.h>

int posicao(int v[], int n, int valor){
    for(int i=0; i<n; i++){
        if(v[i]==valor){
            return i;
        }
    }
    return -1;
}

int main(){
    int X[5] = {4,32,17,29,11};
    int r = posicao(X, 5, 10);
    printf("Posição do valor: X[%d]\n", r);

    return 0;
}