#include <stdio.h>

void exclamacao(int n, int i){
    if(i < n+1){
        for(int j=0; j<i; j++){
            printf("!");
        }
        printf("\n");
        exclamacao(n, i+1);
    }
    if(i > n){
        return;
    }
}

int main(){
    int x;
    scanf("%d", &x);
    exclamacao(x, 1);
    return 0;
}