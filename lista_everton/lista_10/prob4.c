#include <stdio.h>
#include <stdlib.h>

int media(int v[], int n){
    int media = 0;
    for(int i=0; i<n; i++){
        media = media + v[i];
    }
    return media/n;
}

int main(){
    int X[10];
    for(int i=0; i<10; i++){
        X[i] = rand() % 100;
        printf("X[%d] = %d\n", i, X[i]);
    }
    int r = media(X, 10);
    printf("Media = %d\n", r);
    return 0;
}