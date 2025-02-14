#include <stdio.h>

int pell(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n > 1){
        return (2* pell(n-1)) + pell(n-2);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    int r = pell(x);
    printf("Resultado: %d\n", r);
    return 0;
}