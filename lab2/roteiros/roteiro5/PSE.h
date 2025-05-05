#ifndef PSE_H
#define PSE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
    int info;
    struct NO* prox;
}NO;
typedef struct{
    int qtd;
    struct NO* topo;
}Pilha;

NO* alocarNO(){
    return (NO*) malloc (sizeof(NO));
}

void liberarNO(NO* q){
    free(q);
}

Pilha* criaPilha(){
    Pilha *pi;
    pi = (Pilha*) malloc (sizeof(Pilha));
    if(pi != NULL){
        pi->topo = NULL;
        pi->qtd = 0;
    }
    return pi;
}


int estaVazia(Pilha *pi){
    if(pi == NULL) return 0;
    if(pi->topo == NULL) return 1;
    return 0;
}


int empilhar(Pilha* pi, int elem){
    if(pi == NULL) return 0;
    NO* novo = alocarNO();
    if(novo == NULL) return 0;
    novo->info = elem;
    if(estaVazia(pi))
        novo->prox = NULL;
    else
        novo->prox = pi->topo;
    pi->topo = novo;
    pi->qtd++;
    return 1;
}

int desempilhar(Pilha *pi){
    if(pi == NULL) return 0;
    if(estaVazia(pi)) return 0;
    NO* aux = pi->topo;
    pi->topo = pi->topo->prox;
    pi->qtd--;
    liberarNO(aux);
    return 1;
}

int verTopo(Pilha* pi, int* p){
  if(pi == NULL) return 0;
  if(estaVazia(pi)) return 0;
  *p = pi->topo->info;
  return 1;
}

void imprime(Pilha* pi){
  if(pi == NULL) return;
  if(estaVazia(pi)){
    printf("Pilha Vazia!\n");
    return;
  }
  NO* aux = pi->topo;
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

void imprimeRevRec(Pilha* pi){
    if(pi == NULL){
        return;
    }
    if(estaVazia(pi)){
        printf("Lista vazia!\n");
        return;
    }
    printf("Elementos:\n");
    recComplementar(pi->topo);
    printf("\n");
}


void destroiPilha(Pilha* pi){
    if(pi != NULL){
        NO* aux;
        while(pi->topo != NULL){
            aux = pi->topo;
            pi->topo = pi->topo->prox;
            liberarNO(aux);
        }
        free(pi);
    }
}

#endif