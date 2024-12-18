#include <stdio.h>

void zeraNegativos(int v[], int n){
    for(int i=0; i<n; i++){
        if(v[i] < 0){
            v[i] = 0;
        }
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int A[n];
    for(int i=0; i<n; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i<n; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }
    printf("\n");
    zeraNegativos(A, n);
    for(int i=0; i<n; i++){
        printf("A[%d] = %d\n", i, A[i]);
    }
    return 0;
}