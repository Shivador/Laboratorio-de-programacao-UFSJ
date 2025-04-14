#ifndef CUBO_H
#define CUBO_H

#include <stdio.h>
#include <stdlib.h>

typedef struct sCubo{
    float aresta;
}Cubo;

Cubo* criaCubo(){
    Cubo *c = (Cubo*)malloc(sizeof(Cubo));
    return c;
}

void inicializaAresta(Cubo *c, float x){
    c->aresta = x;
}

float tamanhoLado(Cubo *c){
    return c->aresta;
}

float areaCubo(Cubo *c){
    return (c->aresta * c->aresta) * 6;
}

float volumeCubo(Cubo *c){
    return (c->aresta * c->aresta * c->aresta);
}

float desalocaCubo(Cubo *c){
    free(c);
}


#endif