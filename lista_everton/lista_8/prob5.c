#include <stdio.h>

typedef struct{ 
  float comprimento; 
  float largura;
  float altura; 
} Caixa;

int cabe(Caixa a, Caixa b, Caixa c){
    if((a.comprimento < b.comprimento) && (a.altura < b.altura) && (a.largura < b.largura) && (b.comprimento < c.comprimento) && (b.largura < c.largura) && (b.altura < c.altura)){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    Caixa x, y, z;
    scanf("%f %f %f", &x.comprimento, &x.largura, &x.altura);
    scanf("%f %f %f", &y.comprimento, &y.largura, &y.altura);
    scanf("%f %f %f", &z.comprimento, &z.largura, &z.altura);
    int r = cabe(x, y, z);
    if(r==1){
        printf("É possível colocar uma caixa dentro da outra\n");
    } else{
        printf("Não é possível colocar uma caixa dentro da outra\n");
    }
    return 0;
}