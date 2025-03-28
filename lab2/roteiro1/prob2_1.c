#include <stdio.h>
#include <stdlib.h>

void crescente(int n){
    if(n > 5) return;
    printf("%d\n", n);
    crescente(n+1);
}

void decrescente(int n){
    if(n < 1) return;
    printf("%d\n", n);
    decrescente(n-1);
}

int main(){
    crescente(1);
    printf("\n");
    decrescente(5);
    return 0;
}