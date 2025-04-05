#include <stdio.h>
#include "catalogo.h"

int main(){
    CatalogoProdutos x;
    criarCatalogo(&x);
    adicionarProduto(&x, "banana", 5.00, 10);
    int r = verificarEstoque(&x, "banana");
    printf("Quantidade de bananas: %d\n", r);
    imprimirCatalogo(&x);
    return 0;
}