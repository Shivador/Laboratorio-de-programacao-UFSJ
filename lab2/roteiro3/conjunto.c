#include <stdio.h>
#include "conjunto.h"

int main(){
    Conjunto *a, *b;
    a = criaConjunto(5);
    b = criaConjunto(5);

    inserirElemento(a);
    inserirElemento(b);

    Conjunto *uniao;
    uniao = uniaoConjunto(a, b);
    printf("Conjunto uniao AB:\n");
    imprimeConjunto(uniao);

    Conjunto *diferenca;
    diferenca = diferencaConjunto(a, b);
    printf("Diferença conjunto AB:\n");
    imprimeConjunto(diferenca);

    Conjunto *intersecao;
    intersecao = intersecaoConjunto(a, b);
    printf("Interseção conjunto AB:\n");
    imprimeConjunto(intersecao);

    printf("Menor valor do conjunto A: %d\nMenor valor do conjunto B: %d\n", menorValor(a), menorValor(b));
    printf("Maior valor do conjunto A: %d\nMaior valor do conjunto B: %d\n", maiorValor(a), maiorValor(b));

    desalocaConjunto(a);
    desalocaConjunto(b);
    desalocaConjunto(uniao);
    desalocaConjunto(diferenca);
    desalocaConjunto(intersecao);

    return 0;
}