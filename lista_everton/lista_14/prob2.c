#include <stdio.h>

void decrescente(int n){
    if(n == 0){
        printf("Decrescente: %d\n", n); 
        return;
    }
    if(n > 0){
        printf("Decrescente: %d\n", n);
        decrescente(n-1);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    decrescente(x);

    return 0;
}