#include <stdio.h>

struct Retangulo{ 
  float base; 
  float altura; 
};

void troca(struct Retangulo *x, struct Retangulo *y){
    struct Retangulo temp;
    temp.base = x->base;
    temp.altura = x->altura;
    x->base = y->base;
    x->altura = y->altura;
    y->base = temp.base;
    y->altura = temp.altura;
}

int main(){
  struct Retangulo x = {3,4}, y = {5,6};
  troca(&x, &y);
  printf("x=%.0f,%.0f y=%.0f,%.0f\n", x.base, x.altura, y.base, y.altura);
  return 0;
}


