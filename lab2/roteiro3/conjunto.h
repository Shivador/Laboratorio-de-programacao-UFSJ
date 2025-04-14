#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct sConjunto{
    int *v;
    int max;
    int qnt;
}Conjunto;

Conjunto* criaConjunto (int max){
    Conjunto *c = (Conjunto*)malloc(sizeof(Conjunto));
    c->v = (int*)malloc(sizeof(int) * max);
    c->max = max;
    c->qnt = 0;
    return c;
}

Conjunto* preencheConjunto(Conjunto *x, Conjunto *y){
    for(int i=0; i<y->qnt; i++){
        x->v[i] = y->v[i];
    }
    x->qnt = y->qnt;
    return x;
}

int conjuntoVazio(Conjunto *c){
    if(c == NULL){
        printf("Não há conjunto criado!\n");
        return 0;
    }
    return (c->qnt == 0);
}

int tamanhoConjunto(Conjunto *c){
    if(c == NULL){
        printf("Não há conjunto criado!\n");
        return 0;
    }
    return c->qnt;
}

int inserirElemento(Conjunto *c){
    if(c == NULL){
        printf("Não há conjunto criado!\n");
        return 0;
    }
    int aux;
    printf("Insira os elementos no conjunto:\n");
    for(int i=c->qnt; i<c->max; i++){
        scanf("%d", &aux);
        c->v[c->qnt] = aux;
        c->qnt++;
    }
    printf("\n");
    return 1;
}

int removerElemento(Conjunto *c, int elem){
    if(c == NULL){
        printf("Não há conjunto criado!\n");
        return 0;
    }
    int flag;
    if(!conjuntoVazio(c)){
        for(int i=0; i<c->qnt; i++){
            if(c->v[i] == elem){
                flag = i;
            }
        }
        for(int i=flag; i<c->qnt-1; i++){
            c->v[i] = c->v[i+1];         
        }
        c->qnt--;
        return 1;
    }
}

int pertenceConjunto(Conjunto *c, int elem){
    if(c == NULL){
        printf("Não há conjunto criado!\n");
        return 0;
    }
    for(int i=0; i<c->max; i++){
        if(c->v[i] == elem){
            return elem;
        }
    }
    return 0;
}

Conjunto* uniaoConjunto(Conjunto *x, Conjunto *y){
    Conjunto *c = (Conjunto*)malloc(sizeof(Conjunto));
    c->v = (int*)malloc(sizeof(int) * (x->qnt + y->qnt));
    c->max = x->qnt + y->qnt;
    c->qnt = 0;
    Conjunto *temp = criaConjunto(5);
    Conjunto *temp2 = criaConjunto(5);
    preencheConjunto(temp, x);
    preencheConjunto(temp2, y);
    int rep = 0;
    for(int i=0; i<temp2->max; i++){
        int aux = pertenceConjunto(temp, temp2->v[i]);
        if(aux){
            for(int j=0; j<temp->max; j++){
                if(temp->v[j] == aux){
                    removerElemento(temp, aux);
                    rep++;
                }
            }
        }
    }
    for(int i=0; i<temp->qnt; i++){
        c->v[i] = temp->v[i];
        c->qnt++;
    }
    int k = 0;
    for(int i=c->qnt; i<c->max; i++){
        c->v[i] = temp2->v[k];
        k++;
        c->qnt++;
    }
    c->qnt -= rep;
    return c;
}

Conjunto* diferencaConjunto(Conjunto *x, Conjunto *y){
    Conjunto *c = (Conjunto*)malloc(sizeof(Conjunto));
    c->v = (int*)malloc(sizeof(int) * (x->qnt + y->qnt));
    c->max = x->qnt + y->qnt;
    c->qnt = 0;
    Conjunto *temp = criaConjunto(5);
    Conjunto *temp2 = criaConjunto(5);
    preencheConjunto(temp, x);
    preencheConjunto(temp2, y);
    for(int i=0; i<c->max; i++){
        int aux = pertenceConjunto(temp, temp2->v[i]);
        if(aux){
            for(int j=0; j<temp->max; j++){
                if(temp->v[j] == aux){
                    removerElemento(temp, aux);
                }
            }
        }
    }
    for(int i=0; i<temp->qnt; i++){
        c->v[i] = temp->v[i];
        c->qnt++;
    }
    return c;
}

Conjunto* intersecaoConjunto(Conjunto *x, Conjunto *y){
    Conjunto *c = (Conjunto*)malloc(sizeof(Conjunto));
    c->v = (int*)malloc(sizeof(int) * (x->qnt + y->qnt));
    c->max = x->qnt + y->qnt;
    c->qnt = 0;
    Conjunto *temp = criaConjunto(5);
    Conjunto *temp2 = criaConjunto(5);
    preencheConjunto(temp, x);
    preencheConjunto(temp2, y);
    for(int i=0; i<c->max; i++){
        int aux = pertenceConjunto(temp, temp2->v[i]);
        if(aux){
            for(int j=0; j<temp->max; j++){
                if(temp->v[j] == aux){
                    c->v[c->qnt] = aux;
                    c->qnt++;
                }
            }
        }
    }
    return c;
}

void imprimeConjunto(Conjunto *c){
    printf("{");
    for(int i=0; i<c->qnt; i++){
        printf("%d, ", c->v[i]);
    }
    printf("}");
    printf("\n");
}

void desalocaConjunto(Conjunto *c){
    free(c->v);
    free(c);
}

int maiorValor(Conjunto *c){
    int maior = c->v[0];
    for(int i=0; i<c->qnt; i++){
        if(c->v[i] > maior){
            maior = c->v[i];
        }
    }
    return maior;
}

int menorValor(Conjunto *c){
    int menor = c->v[0];
    for(int i=0; i<c->qnt; i++){
        if(c->v[i] < menor){
            menor = c->v[i];
        }
    }
    return menor;
}

#endif