#ifndef TAD1_H
#define TAD1_H

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numerador;
    int denominador;
}Fracao;

Fracao* criaFracao(){
    Fracao* f = (Fracao*)malloc(sizeof(Fracao));
    if(f != NULL){
        f->numerador = 0;
        f->denominador = 1;
    }
    return f;
}

void destroifracao(Fracao* f){
    if(f != NULL){
        free(f);
    }
}

int MMC(Fracao* f1, Fracao* f2){
    int maior;
    int menor;
    if(f1->denominador > f2->denominador){
        maior = f1->denominador;
        menor = f2->denominador;
    }else {
        maior = f2->denominador;
        menor = f1->denominador;
    }
    int mmc = maior;
    while(mmc % menor != 0){
        mmc += maior;
    }
    return mmc;
}

int mdcRec(int a, int b){
    if(b == 0){
        return a;
    }
    return mdcRec(b, a % b);
}

int operacao(Fracao* f1, Fracao* f2, Fracao* f3, int op){
    if(f1 == NULL || f2 == NULL) return 0;
    if(op == 1){
        f3->numerador = f1->numerador + f2->numerador;
        f3->denominador = MMC(f1, f2);
    }else if(op ==2){
        f3->numerador = f1->numerador - f2->numerador;
        f3->denominador = MMC(f1, f2);
    }else if(op == 3){
        f3->numerador = f1->numerador * f2->numerador;
        f3->denominador = f1->denominador * f2->denominador;
    }else if(op == 4){
        f3->numerador = f1->numerador / f2->numerador;
        f3->denominador = f1->denominador / f2->denominador;
    } else {
        printf("Falha na operação.\n");
        return 0;
    }
    return 1;
}

int simplificaFracao(Fracao* f){
    if(f == NULL) return 0;
    int div = mdcRec(f->numerador, f->denominador);
    f->numerador /= div;
    f->denominador /= div;
}

void imprime(Fracao* f){
    if(f == NULL) return;
    printf("Fração: %d/%d\n", f->numerador, f->denominador);
}


#endif