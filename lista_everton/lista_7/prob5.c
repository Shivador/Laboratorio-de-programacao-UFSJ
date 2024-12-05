#include <stdio.h>

int soma_algarismos(int x){
    if(x<0){
        return -1;
    } else{
        int c = x/100;
        int d = x%100 / 10;
        int u = x%10;
        return c+d+u;
    }
}

int main(){
    int n;
    printf("Numero lido: ");
    scanf("%d", &n);
    int r = soma_algarismos(n);
    printf("Soma algarismos: %d\n", r);
    return 0;
}