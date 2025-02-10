#include <stdio.h>

int main(){
    float soma = 0;
    float media = 0;
    float M[12][12];
    int x;
    char operacao;
    scanf("%d\n%c", &x, &operacao);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    if(operacao == 'S'){
        for(int i=0; i<12; i++){
            soma += M[x][i];
        }
        printf("%.1f\n", soma);
    }else {
        for(int i=0; i<12; i++){
            media += M[x][i];
        }
        printf("%.1f\n", media/12);
    }
    return 0;
}