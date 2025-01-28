#include <stdio.h>

int main(){
    int m[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    int v[3];
    for(int j=0; j<3; j++){
        int soma = 0;
        for(int i=0; i<3; i++){
            soma += m[i][j];
        }
        v[j] = soma;
    }
    printf("Vetor soma: ");
    for(int i=0; i<3; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}