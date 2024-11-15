#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    if (x==61 || x==71 || x==11 || x==21 || x==32 || x==19 || x==27 || x==31){
        if (x==61){
            printf("Brasilia\n");
        } else if (x==71){
            printf("Salvador\n");
        } else if (x==11){
            printf("Sao Paulo\n");
        } else if (x==21){
            printf("Rio de Janeiro\n");
        } else if (x==32){
            printf("Juiz de Fora\n");
        } else if (x==19){
            printf("Campinas\n");
        } else if (x==27){
            printf("Vitoria\n");
        } else if (x==31){
            printf("Belo Horizonte\n");
        }
    } else {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}