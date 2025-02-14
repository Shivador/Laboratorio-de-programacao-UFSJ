#include <stdio.h>

int potencia(int x, int y){
    if(y == 0){
        return 1;
    }
    if(y > 1){
        return x * potencia(x, y-1);
    }
}

int main(){
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int r = potencia(x, y);
    printf("%d\n", r);
    return 0;
}