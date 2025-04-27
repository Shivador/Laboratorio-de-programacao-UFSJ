#ifndef LCSE_H
#define LCSE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int info;
    struct NO* prox;
}NO;

typedef struct NO* Lista;

Lista* criaLista(){
    Lista* li;
    li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

int listaVazia(Lista* li){
    if(li == NULL){
        return -1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

NO* alocarNO(){
    return (NO*)malloc(sizeof(NO));
}

void liberarNO(NO* q){
    free(q);
}

int insereIni(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    novo->info = elem;
    if(listaVazia(li)){
        novo->prox = novo;
        *li = novo;
    }else {
        NO* aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = *li;
        *li = novo;
    }
    return 1;
}

int insereFim(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    novo->info = elem;
    if(listaVazia(li)){
        novo->prox = novo;
        *li = novo;
    }else {
        NO* aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = novo;
        novo->prox = *li;
    }
    return 1;
}

int removeIni(Lista* li){
    if(li == NULL){
        return 0;
    }
    if(listaVazia(li)){
        return 0;
    }
    NO* prim = *li;
    if(prim == prim->prox){
        *li == NULL;
    } else{
        NO* aux = *li;
        while(aux->prox != (*li)){
            aux = aux->prox;
        }
        aux->prox = (*li)->prox;
        *li = (*li)->prox;
    }
    liberarNO(prim);
    return 1;
}

int removeFim(Lista* li){
    if(li == NULL){
        return 0;
    }
    if(listaVazia(li)){
        return 0;
    }
    NO* aux = *li;
    if(aux == aux->prox){
        *li == NULL;
    }else {
        NO* ant;
        while(aux->prox != (*li)){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = *li;
    }
    liberarNO(aux);
    return 1;
}

void imprimeLista(Lista* li){
    if(li == NULL){
        return;
    }
    if(listaVazia(li)){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos:\n");
    NO* aux = *li;
    while(aux->prox != (*li)){
        printf("%d ", aux->info);
        aux = aux->prox;
    }
    printf("%d ", aux->info);
    printf("\n");
}

void destroiLista(Lista* li){
    if(li != NULL && (*li) != NULL){
        NO* prim, *aux;
        prim = *li;
        (*li) = (*li)->prox;
        while((*li) != prim){
            aux = *li;
            *li = (*li)->prox;
            liberarNO(aux);
        }
        liberarNO(prim);
        free(li);
    }
}

int tamanho(Lista* li){
    if(li == NULL){
        return 0;
    }
    if(listaVazia(li)){
        printf("Lista vazia!\n");
        return 0;
    }
    NO* aux = *li;
    int tamanho = 1;
    while(aux->prox != (*li)){
        aux = aux->prox;
        tamanho++;
    }
    return tamanho;
}

int procura(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    NO* aux = *li;
    int tamanho = 0;
    while(aux->prox != (*li)){
        if(aux->info == elem){
            return tamanho;
        }
        aux = aux->prox;
        tamanho++;
    }
    return -1;
}

#endif