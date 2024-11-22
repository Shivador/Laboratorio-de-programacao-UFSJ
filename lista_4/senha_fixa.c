#include <stdio.h>

int main(){
    
    while(1){
        int x;
        scanf("%d", &x);
        if(x==2002){
            printf("Acesso Permitido\n");
            break;
        } else{
            printf("Senha Invalida\n");
        }
    }
return 0;
}