#include <stdio.h>

int mdc(int x, int y){
    int maior = 0;
    int mdc = 0;
    if(x>y){
        maior = x;
        for(int i=2; i<y; i++){
            if(y%i==0 && maior%i==0){
                mdc = i;
            }
        }
        return mdc;
        
    } else{
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
    printf("%d\n", mdc(x,y));
    return 0;
}