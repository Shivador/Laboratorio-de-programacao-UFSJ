#include <stdio.h>
void troca(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;

}



int main(){
  int x = 5, y = 3;
  troca(&x, &y);
  printf("x=%d y=%d\n", x, y);
  return 0;

}
