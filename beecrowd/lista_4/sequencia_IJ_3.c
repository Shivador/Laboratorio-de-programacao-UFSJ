#include <stdio.h>

int main(){
    int n = 7;

    for(int i=1; i<=9; i+=2){
        for(int j=n; j>=n-2; j--){
            printf("I=%d J=%d\n", i, j);
        }
        n+=2;
    }
    return 0;
}