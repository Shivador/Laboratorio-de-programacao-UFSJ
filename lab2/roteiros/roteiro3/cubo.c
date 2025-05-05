#include <stdio.h>
#include "cubo.h"

int main(){
    Cubo *c;
    c = criaCubo();
    inicializaAresta(c, 2);
    printf("Tamanho do lado do cubo: %.2f m\n", tamanhoLado(c));
    printf("Área do cubo: %.2f m2\n", areaCubo(c));
    printf("Volume do cubo: %.2f m3\n", volumeCubo(c));

    desalocaCubo(c);
    return 0;
}