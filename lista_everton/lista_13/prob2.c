#include <stdio.h>
#include <stdlib.h>

int main() { 
  int *x = (int*)malloc(sizeof(int));
  int *y = x; 
  free(y); 
  return 0;
} 
