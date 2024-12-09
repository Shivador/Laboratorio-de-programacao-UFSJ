#include <stdio.h>

int main(){
  int x = 9;
  int *y;
  y = &x;
  x++;
  printf("O valor de y é %d\n", *y);
  return 0;	
}