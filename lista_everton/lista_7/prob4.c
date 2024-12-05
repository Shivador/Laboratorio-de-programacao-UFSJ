#include <stdio.h>

float operacao(float a, float b, char l){
    if(l=='+'){
        return a+b;
    } else if(l=='-'){
        return a-b;
    } else if(l=='/'){
        return a/b;
    } else if(l=='*'){
        return a*b;
    }
}

int main(){
    int x, y;
    char z;
    scanf("%d %d %c", &x, &y, &z);
    float r = operacao(x, y, z);
    printf("Resultado: %.1f\n", r);
    return 0;
}