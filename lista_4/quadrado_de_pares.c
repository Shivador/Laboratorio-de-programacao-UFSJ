#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    for(int x=2;n%2==0; x+=2){
    printf("%d^2 = %d\n", x, x*x);
        if(x==n){
        break;
        }
    } 
return 0;
}