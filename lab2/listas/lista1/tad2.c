#include <stdio.h>
#include "tad2.h"

int main(){
    Pedido *P;
    P = criaPedido();
    int j;
    do{
        printf("--------------------\n");
        printf("Escolha uma opção:\n");
        printf("1. Adicionar item\n");
        printf("2. Remover item\n");
        printf("3. Adicionar endereço\n");
        printf("4. Calcular preço\n");
        printf("5. Finalizar Pedido\n");
        printf("--------------------\n");

        scanf("%d", &j);
        
        switch (j) {
            case 1: adicionar_item(P);break;
            case 2: remover_item(P);break;
            case 3: definir_endereço(P); break;
            case 4: calcular_total(P); break;
            case 5: finalizar_pedido(P);break;
            default: printf("Digite uma opção válida!\n");
        }
    }while(j != 5);

    destroiPedido(P);
    return 0;
}