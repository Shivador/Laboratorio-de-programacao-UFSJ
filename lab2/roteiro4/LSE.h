#ifndef LSE_H
#define LSE_H

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
    novo->prox = *li;
    *li = novo;
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
    novo->prox = NULL;
    if(listaVazia(li)){
        *li = novo;
    }else {
        NO* aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novo;
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
    NO* aux = *li;
    *li = aux->prox;
    liberarNO(aux);
}

int removeFim(Lista* li){
    if(li == NULL){
        return 0;
    }
    if(listaVazia(li)){
        return 0;
    }
    NO* ant, *aux = *li;
    while(aux->prox != NULL){
        ant = aux;
        aux = aux->prox;
    }
    if(aux == *li){
        *li = aux->prox;
    } else {
        ant->prox = aux->prox;
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
    while(aux != NULL){
        printf("%d ", aux->info);
        aux = aux->prox;
    }
    printf("\n");
}

void recComplementar(NO* n){
    if(n == NULL){
        return;
    }
    recComplementar(n->prox);
    printf("%d ", n->info);
}

void imprimeRevRec(Lista* li){
    if(li == NULL){
        return;
    }
    if(listaVazia(li)){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos:\n");
    recComplementar(*li);
    printf("\n");
}

void imprimeRev(Lista* li){
    if(li == NULL){
        return;
    }
    if(listaVazia(li)){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos REV:\n");
    NO* ant, *aux;
    NO* fim = NULL;
    do{
        aux = *li;
        while(aux != fim){
            ant = aux;
            aux = aux->prox;
        }
        printf("%d ", ant->info);
        fim = ant;
    }while(fim != *li);
    printf("\n");
}

void destroiLista(Lista* li){
    if(li != NULL){
        NO* aux;
        while((*li) != NULL){
            aux = *li;
            *li = (*li)->prox;
            liberarNO(aux);
        }
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
    int tamanho = 0;
    while(aux != NULL){
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
    while(aux != NULL){
        if(aux->info == elem){
            return tamanho;
        }
        aux = aux->prox;
        tamanho++;
    }
    return -1;
}

int insereOrdenada(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    novo->info = elem;
    if(listaVazia(li)){
        *li = novo;
    }else {
        NO* ant;
        NO* aux = *li;
        if(elem <= aux->info){
            insereIni(li, elem);
        }
        while(aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
            if(elem >= ant->info && elem <= aux->info){
                ant->prox = novo;
                novo->prox = aux;
                return 1;
            }
        }
        if(elem >= aux->info){
            insereFim(li, elem);
        }
    }
    return 1;
}

int removeElemento(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    if(listaVazia(li)){
        return 0;
    }else {
        NO* ant;
        NO* aux = *li;
        while(aux->info != elem){
            ant = aux;
            aux = aux->prox;
            if(aux->info == elem){
                ant->prox = aux->prox;
                liberarNO(aux);
                return 1;
            }
        }
    }
    return -1;
}


#endif