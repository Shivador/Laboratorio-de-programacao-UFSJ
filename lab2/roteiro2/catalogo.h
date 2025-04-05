#ifndef CATALOGO_H
#define CATALOGO_H  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produto{
    char nome[100];
    double preco;
    int quantidade;
}Produto;


typedef struct catalogo{
    Produto p[100];
    int total;
}CatalogoProdutos;

void criarCatalogo(CatalogoProdutos *c){
    c->total = 0;
}

void adicionarProduto(CatalogoProdutos *c, char *nome, double preco, int quantidade){
    strcpy(c->p->nome, nome);
    c->p->preco = preco;
    c->p->quantidade = quantidade;
    c->total += 1;
}

int verificarEstoque(CatalogoProdutos *c, char *nome){
    for(int i=0; i < c->total; i++){
        if (strcmp(c->p[i].nome, nome) == 0){
            return c->p[i].quantidade;
        }
    }
    return 0;
}

void imprimirCatalogo(CatalogoProdutos *c){
    for(int i=0; i < c->total; i++){
        printf("Nome: %s\n", c->p[i].nome);
        printf("Preco: %.2lf\n", c->p[i].preco);
        printf("Quantidade: %d\n", c->p[i].quantidade);
    }
}



#endif