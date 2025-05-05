#ifndef TA2_H
#define TA2_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    float preco;
    int quantidade;
}Item;

typedef struct{
    Item itens[10];
    char endereço[100];
    int total;
    char status[100];
    float preco;
}Pedido;

Pedido* criaPedido(){
    Pedido* P;
    P = (Pedido*)malloc(sizeof(Pedido));
    if(P != NULL){
        P->total = 0;
        P->preco = 0;
    }
}

int adicionar_item(Pedido* P){
    if(P == NULL) return 0;
    printf("\nDigite nome, preço e quantidade do produto:\n");
    scanf("%s", P->itens[P->total].nome);
    scanf("%f", &P->itens[P->total].preco);
    scanf("%d", &P->itens[P->total].quantidade);
    P->total++;
    return 1;
}

int remover_item(Pedido* P){
    if(P == NULL) return 0;
    if(P->total == 0) return 1;
    P->total--;
    return 1;
}

int calcular_total(Pedido* P){
    if(P == NULL) return 0;
    int i = P->total;
    while(i != 0){
        P->preco += (P->itens[i-1].preco * P->itens[i-1].quantidade);
        i--;
    }
    return 1;
}

int definir_endereço(Pedido* P){
    if(P == NULL) return 0;
    printf("\nDigite o endereço de entrega:\n");
    scanf("%s", P->endereço);
    return 1;
}

int alterar_status(Pedido* P){
    if(P == NULL) return 0;
    if(P->total == 0){
        strcpy(P->status, "pendente"); 
    } else {
        strcpy(P->status, "preparando");
    }
    return 1;
}

int finalizar_pedido(Pedido* P){
    if(P == NULL) return 0;
    printf("Total de itens: %d\n", P->total);
    printf("Valor final do pedido: %.2f\n", P->preco);
    printf("Entregar no endereço: %s\n", P->endereço);
    alterar_status(P);
    printf("Status do pedido: %s\n", P->status);
}

void destroiPedido(Pedido *P){
    free(P);
}

#endif