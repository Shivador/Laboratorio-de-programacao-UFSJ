#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    int soma = 0;
    int i = 1;
    while(x!=i){
        if(x%i==0){
            soma = soma + i;

        }
        i++;
    
    }
    printf("%d\n", soma);





    return 0;
}