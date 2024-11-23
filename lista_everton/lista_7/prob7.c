#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int a = 0;
    int b = 1;
    int c = a+b;
    int p = 2;
    for(; c<x; p++){
        a = b;
        b = c;
        c = a+b;

    }
    printf("Posição: %d\n", p);


    return 0;
}