#include <stdio.h>

int mmc(int x, int y){
    
    int mmc = x*y;
    for(int i=mmc; i>1; i--){
        if(i%x==0 && i%y==0){
            mmc = i;
        }
    }
    return mmc;
    
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", mmc(x,y));
    return 0;
}