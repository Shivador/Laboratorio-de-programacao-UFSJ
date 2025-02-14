#include <stdio.h>

int mdc(int x, int y){
    if(x % y == 0){
        return y;
    }
    if(x%y != 0){
        return mdc(y, x%y);
    }
}
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int r = mdc(x, y);
    printf("%d\n", r);
    return 0;
}