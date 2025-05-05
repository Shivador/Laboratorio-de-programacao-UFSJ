#ifndef FSE_H
#define FSE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int info;
    struct NO* prox;
}NO;

typedef struct{
    int qtd;
    struct NO* ini;
    struct NO* fim;
}Fila;

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void liberarNO(NO* q){
    free(q);
}

Fila* criaFila(){
    Fila *fi;
    fi = (Fila*) malloc (sizeof(Fila));
    if(fi != NULL){
        fi->ini = NULL;
        fi->fim = NULL;
        fi->qtd = 0;
    }
    return fi;
}


int estaVazia(Fila *fi){
    if(fi == NULL) return 0;
    if(fi->ini == NULL) return 1;
    return 0;
}


int enfileirar(Fila* fi, int elem){
    if(fi == NULL) return 0;
    NO* novo = alocarNO();
    if(novo == NULL) return 0;
    novo->info = elem;
    novo->prox = NULL;
    if(estaVazia(fi))
        fi->ini = novo;
    else
        fi->fim->prox = novo;
    fi->fim = novo;
    fi->qtd++;
    return 1;
}

int desenfileirar(Fila *fi){
    if(fi == NULL) return 0;
    if(estaVazia(fi)) return 0;
    NO* aux = fi->ini;
    if(fi->ini == fi->fim)
        fi->ini = fi->fim = NULL;
    else
        fi->ini = fi->ini->prox;
    fi->qtd--;
    liberarNO(aux);
    return 1;
}

int verInicio(Fila* fi, int* p){
  if(fi == NULL) return 0;
  if(estaVazia(fi)) return 0;
  *p = fi->ini->info;
  return 1;
}

void imprime(Fila* fi){
  if(fi == NULL) return;
  if(estaVazia(fi)){
    printf("Fila Vazia!\n");
    return;
  }
  NO* aux = fi->ini;
  printf("Elementos: \n");
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

void imprimeRevRec(Fila* fi){
    if(fi == NULL){
        return;
    }
    if(estaVazia(fi)){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos:\n");
    recComplementar(fi->ini);
    printf("\n");
}

void destroiFila(Fila* fi){
    if(fi != NULL){
        NO* aux;
        while(fi->ini != NULL){
            aux = fi->ini;
            fi->ini = fi->ini->prox;
            liberarNO(aux);
        }
        free(fi);
    }
}

#endif