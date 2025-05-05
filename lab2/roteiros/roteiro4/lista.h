#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct{
    int qtd;
    int dados[MAX];
}Lista;

Lista* criaLista(){
    Lista* li;
    li = (Lista*) malloc (sizeof(Lista));
    if(li != NULL)
        li->qtd = 0;
    return li;
}

void destroiLista(Lista *li){
    if(li != NULL)
        free(li);
}

int tamanhoLista(Lista *li){
    if(li == NULL)
        return -1;
    return li->qtd;
}

int listaCheia(Lista *li){
    if(li == NULL)
        return -1;
    return (li->qtd == MAX);
}

int listaVazia(Lista *li){
    if(li == NULL)
        return -1;
    return (li->qtd == 0);
}

int insereFim(Lista* li, int elem){
    if(li == NULL) return 0;
    if(!listaCheia(li)){
        li->dados[li->qtd] = elem;
        li->qtd++;
        return 1;
    }else{
        return 0;
    }
}

int insereIni(Lista* li, int elem){
    if(li == NULL) return 0;
    if(!listaCheia(li)){
        int i;
        for(i=li->qtd; i>0; i--){
            li->dados[i] = li->dados[i-1];
        }
        li->dados[0] = elem;
        li->qtd++;
        return 1;
    }else{
        return 0;
    }
}

int imprimeLista(Lista *li){
    if(li == NULL) return 0;
    int i;
    printf("Elementos:\n");
    for(i=0; i<li->qtd; i++){
        printf("%d ", li->dados[i]);
    }
    printf("\n");
    printf("\n");
    return 1;
}

int removeFim(Lista* li){
    if(li == NULL) return 0;
    if(!listaVazia(li)){
        li->qtd--;
        return 1;
    }else return 0;
}

int removeIni(Lista *li){
    if(li == NULL ) return 0;
    if(!listaVazia(li)){
        int i;
        for(i=0; i<li->qtd-1; i++)
            li->dados[i] = li->dados[i+1];
        li->qtd--;
        return 1;
    } else{
        return 0;
    }
}

int procura(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    int i;
    for(i=0; i<li->qtd; i++){
        if(li->dados[i] == elem){
            return i;
        }
    }
    return -1;
}

int insereOrdenada(Lista* li, int elem){
    if(li == NULL){
        return 0;
    }
    li->qtd++;
    for(int i=0; i<li->qtd-1; i++){
        if(elem >= li->dados[i] && elem <= li->dados[i+1]){
            for(int j=li->qtd; j>i+1; j--){
                li->dados[j] = li->dados[j-1];
            }
            li->dados[i+1] = elem;
            return 1;
        }
    }
}

void removeElemento(Lista* li, int elem){
    if(li == NULL){
        return;
    }
    for(int i=0; i<li->qtd; i++){
        if(li->dados[i] == elem){
            for(int j=i; j<li->qtd; j++){
                li->dados[j] = li->dados[j+1];
            }
            removeFim(li);
            return;
        }
    }
}

#endif
