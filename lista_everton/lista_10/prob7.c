#include <stdio.h>
#include <math.h>

double desvio(int v[], int n){
    float m = 0;
    float s = 0;
    for(int i=0; i<n; i++){
        m = m + v[i];
    }
    m = m/n;
    for(int i=0; i<n; i++){
        s = s + pow(v[i] - m, 2);
    }
    return sqrt(s/(n-1));
}

int main(){
    int X[5] = {3,4,8,2,5};
    double r = desvio(X, 5);
    printf("Desvio padrao = %.2f\n", r);
    return 0;
}