#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
    int delta = pow(B,2) - 4*(A*C);
    if(delta < 0 ){
        return 0;
    } else if(delta == 0){
        *X1 = (-B + sqrt(delta))/(2*A);
        *X2 = (-B - sqrt(delta))/(2*A);
        return 1;
    } else {
        *X1 = (-B + sqrt(delta))/(2*A);
        *X2 = (-B - sqrt(delta))/(2*A);
        return 2;
    }
}

int main(){
    float A, B, C, X1, X2;
    scanf("%f %f %f", &A, &B, &C);
    int q = raizes(A, B, C, &X1, &X2);
    printf("Número de raízes reais e distintas = %d\n", q);
    return 0;
}