#include <stdio.h>

void maior(int v[], int n){
    int maior = 0;
    int p = 0;
    for(int i=0; i<n; i++){
        if(v[i] > maior){
            maior = v[i];
            p = i;
        }
    }
    printf("Maior elemento: A[%d] = %d\n", p, maior);
}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    maior(A, n);
    return 0;
}