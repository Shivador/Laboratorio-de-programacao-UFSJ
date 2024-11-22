#include <stdio.h>

int main(){
    int senha;
    while(scanf("%d", &senha) != EOF){
        if(senha!=54321){
            printf("Acesso negado\n");
        } else {
            printf("Acesso permitido\n");
            break;
        }
    }

    return 0;
}