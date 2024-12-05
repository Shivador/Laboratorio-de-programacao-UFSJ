#include <stdio.h>

int eh_triangulo(int a, int b, int c){
    if((a+b>c) && (b+c>a) && (c+a>b)){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int x, y, z;
    printf("Lados: ");
    scanf("%d %d %d", &x, &y, &z);
    int r = eh_triangulo(x, y, z);
    if(r==1){
        printf("1\n");
    } else if(r==0){
        printf("0\n");
    }
    return 0;
}