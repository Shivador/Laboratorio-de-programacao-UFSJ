#include <stdio.h>

void troca_ponteiros(int **x, int **y){
    int temp = **x;
    **x = **y;
    **y = temp;
}

int main(){
  int c1 = 30, c2 = 20;
  int *p1, *p2;
  p1 = &c1;
  p2 = &c2;
  troca_ponteiros(&p1, &p2);
  printf("%d %d\n", *p1, *p2);
  return 0;
}
