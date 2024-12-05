#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int aux = n; 
    for(int i=0; i<aux; i++){
        for(int j=n-1; j>0; j--){
            printf(" ");
        }
        for(int k=1; k<2*(i+1); k++){
            printf("*");
        }
        n--;
        printf("\n");

    }
    return 0;
}