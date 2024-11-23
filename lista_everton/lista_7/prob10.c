#include <stdio.h>
#include <math.h>

int main(){
    int p = 0;
    float maior = -INFINITY;
    float menor = INFINITY;
    int soma = 0;
    int q = 0;
    int x;
    while(scanf("%d", &x) != EOF){  
         if(x==0){
            break;
        }
        soma = soma + x;
        if(x>maior){
            maior = x;
        }
        if(x<menor){
            menor = x;
        }
        
        if(x%2!=0){
            p++;
        }
        q++;
    }
    printf("Soma: %d\n", soma);
    printf("Quantidade: %d\n", q);
    printf("O maior: %.0f\n", maior);
    printf("O menor: %.0f\n", menor);
    printf("Porcentagem de ímpares: %.1f%%\n", (p*1.0/q)*100);
    return 0;
}