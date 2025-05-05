#ifndef L23_H
#define L23_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[20];
    int matricula;
    float nota;
}Aluno;

typedef struct NO{
    Aluno info;
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

int insereIni(Lista* li, char* nome, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    strcpy(novo->info.nome, nome);
    novo->info.matricula = elem;
    novo->prox = *li;
    *li = novo;
    return 1;
}

int insereFim(Lista* li, char* nome, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    strcpy(novo->info.nome, nome);
    novo->info.matricula = elem;
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
        printf("%s, ", aux->info.nome);
        aux = aux->prox;
    }
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
        if(aux->info.matricula == elem){
            return tamanho;
        }
        aux = aux->prox;
        tamanho++;
    }
    return -1;
}

int insereOrdenada(Lista* li, char* nome, int elem){
    if(li == NULL){
        return 0;
    }
    NO* novo = alocarNO();
    if(novo == NULL){
        return 0;
    }
    strcpy(novo->info.nome, nome);
    novo->info.matricula = elem;
    if(listaVazia(li)){
        *li = novo;
    }else {
        NO* ant;
        NO* aux = *li;
        if(nome[0] <= aux->info.nome[0]){
            insereIni(li, nome, elem);
        }
        while(aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
            if(nome[0] >= ant->info.nome[0] && nome[0] <= aux->info.nome[0]){
                ant->prox = novo;
                novo->prox = aux;
                return 1;
            }
        }
        if(nome[0] >= aux->info.nome[0]){
            insereFim(li, nome, elem);
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
        while(aux->info.matricula != elem){
            ant = aux;
            aux = aux->prox;
            if(aux->info.matricula == elem){
                ant->prox = aux->prox;
                liberarNO(aux);
                return 1;
            }
        }
    }
    return -1;
}


#endif