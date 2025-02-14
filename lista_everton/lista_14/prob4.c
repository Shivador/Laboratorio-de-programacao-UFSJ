#include <stdio.h>

void asterisco(int n, int i){
    if(i < n){
        for(int j=0 ; j<i; j++){
            printf("*");
        }
        printf("\n");
        asterisco(n , i+1);
    }
    if(i == n){
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
        asterisco(n-1,i);
    }
    if(n < i){
        for(int j=0; j<n; j++){
            printf("*");
        }
        if(n == 0){
            return;
        }
        printf("\n");
        asterisco(n-1,i);
    }
}

int main(){
    int x;
    scanf("%d", &x);
    asterisco(x, 1);
    return 0;
}