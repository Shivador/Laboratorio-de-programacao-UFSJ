#include <stdio.h>
#include "tad1.h"

int main(){
    Fracao* F1, *F2;
    F1 = criaFracao();
    F2 = criaFracao();
    printf("Digite as fracoes:\n");
    scanf("%d %d", &F1->numerador, &F1->denominador);
    scanf("%d %d", &F2->numerador, &F2->denominador);
    int op;
    printf("Escolha a operacao:\n1, 2, 3 ou 4\n");
    scanf("%d", &op);
    Fracao* resultado;
    resultado = criaFracao();
    operacao(F1, F2, resultado, op);
    imprime(F1);
    imprime(F2);
    imprime(resultado);
    simplificaFracao(resultado);
    imprime(resultado);

    destroifracao(F1);
    destroifracao(F2);
    destroifracao(resultado);
    return 0;
}