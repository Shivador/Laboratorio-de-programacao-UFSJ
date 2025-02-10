#include <stdio.h>

int main(){
    float M[12][12];
    char operacao;
    scanf("%c", &operacao);
    float soma = 0;
    float media = 0;
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    int q = 11;
    if(operacao == 'S'){
        for(int i=0; i<11; i++){
            for(int j=0; j<q; j++){
                soma += M[i][j];
            }
            q--;
        }
        printf("%.1f\n", soma);
    } else {
        for(int i=0; i<11; i++){
            for(int j=0; j<q; j++){
                media += M[i][j];
            }
            q--;
        }
        printf("%.1f\n", media/66);
    }
    return 0;
}