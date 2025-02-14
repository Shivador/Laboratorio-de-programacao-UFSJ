#include <stdio.h>

void binario(int x){
    if(x/2 == 0){
        printf("1");
        return;
    }
    if(x%2 == 1){
        binario(x/2);
        printf("1");
    }
    if(x%2 == 0){
        binario(x/2);
        printf("0");
    }
}
int main(){
    int x;
    scanf("%d", &x);
    binario(x);
    printf("\n");
    return 0;
}