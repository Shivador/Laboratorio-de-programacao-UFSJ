#include <stdio.h>

int maior_primo(int x, int y){
    int maior = 0;
    int mdc = 0;
    int ehprimo = 1;
    if(x>y){
        maior = x;
        for(int i=2; i<y; i++){
            if(y%i==0 && maior%i==0){
                mdc = i;
                for(int x=2; x<i; x++){
                if(i%x==0){
                ehprimo = 0;
                
                }
                }
            }
        }
        return mdc;
    }else {
    maior = y;
    for(int i=2; i<x; i++){
        if(x%i==0 && maior%i==0){
            mdc = i;
        }
    }
    return mdc;
    }
        
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", maior_primo(x,y));
    return 0;
}