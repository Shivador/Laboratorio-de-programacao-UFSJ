#include <stdio.h>
#include <stdlib.h>

int multi(int a, int b){
    if(b == 1) return a;
    if(b > 1){
        return a + multi(a , b-1);
    }

}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int r = multi(x, y);
    printf("Multiplicação entre %d e %d = %d\n", x, y, r);
    return 0;
}