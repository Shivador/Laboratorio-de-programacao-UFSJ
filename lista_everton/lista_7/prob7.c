#include <stdio.h>

int pontos(int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            printf("!");
        }
        printf("\n");
    }
}

int main(){
    int x;
    scanf("%d", &x);
    int r = pontos(x);

    return 0;
}