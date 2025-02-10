#include <stdio.h>

int main(){
    float soma = 0;
    float media = 0;
    float M[12][12];
    char operacao;
    scanf("%c", &operacao);
    for(int i=0; i<12; i++){
        for(int j=0; j<12; j++){
            scanf("%f", &M[i][j]);
        }
    }
    int r = 5;
    int t = 7;
    int j;
    if(operacao == 'S'){
        for(int i=7; i<12; i++){
            for(j=r; j<t; j++){
                soma += M[i][j];
            }
            r -= 1;
            t += 1;
            j = r;
        }
        printf("%.1f\n", soma);
    }else {
        for(int i=7; i<12; i++){
            for(j=r; j<t; j++){
                media += M[i][j];
            }
            r -= 1;
            t += 1;
            j = r;
        }
        printf("%.1f\n", media/30);
    }
    return 0;
}