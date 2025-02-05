#include <stdio.h>
#include <stdlib.h>

int *cria_inteiro(int n){
    int* y = (int*)malloc(sizeof(int));
    *y = n;
    return y;

}

int main(){
    int *x;
    x = cria_inteiro(5);
    printf("%d\n", *x);
    free(x);


    return 0;
}