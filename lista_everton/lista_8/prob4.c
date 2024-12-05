#include <stdio.h>

typedef struct{ 
  float comprimento; 
  float largura;
  float altura; 
} Caixa;

int cabe(Caixa a, Caixa b){
    if((a.comprimento < b.comprimento) && (a.altura < b.altura) && (a.largura < b.largura)){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    Caixa x, y;
    scanf("%f %f %f", &x.comprimento, &x.largura, &x.altura);
    scanf("%f %f %f", &y.comprimento, &y.largura, &y.altura);
    int r = cabe(x, y);
    printf("%d\n", r);
    return 0;
}