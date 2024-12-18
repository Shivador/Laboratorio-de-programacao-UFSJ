#include <stdio.h>

float escalar(int v1[], int v2[], int n){
        float escalar = 0;
        for(int i=0; i<n; i++){
            escalar = escalar + (v1[i] * v2[i]);
        }
        return escalar;
}

int main(){
    int X[5] = {3,4,8,2,5};
    int Y[5] = {6,1,4,7,2};
    float r = escalar(X, Y, 5);
    printf("Produto escalar: %f\n", r);

    return 0;
}