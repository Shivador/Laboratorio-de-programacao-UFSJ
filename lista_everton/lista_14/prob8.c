#include <stdio.h>
#include <stdlib.h>
int menor(int a, int b){
    if(a <= b) return a;
    return b;
}
int menorElemento(int v[], int n){
    if(n - 2 < 0){
        return v[n-1];
    }
    return menor(v[n-1], menorElemento(v, n-1));
}
int main(){
    int n;
    scanf("%d", &n);
    int *v = (int*) malloc (sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    int m = menorElemento(v, n);
    printf("%d\n", m);
    free(v);
    return 0;
}