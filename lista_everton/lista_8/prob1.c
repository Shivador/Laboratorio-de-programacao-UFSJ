#include <stdio.h>

typedef struct filme{
    int id;
    int ano;
    int duracao;
}filme;

int main(){
    struct filme f1;
    scanf("%d %d %d", &f1.id, &f1.ano, &f1.duracao);
    printf("Código do filme: %d\n", f1.id);
    printf("Ano de lançamento: %d\n", f1.ano);
    printf("Duração do filme: %d\n", f1.duracao);

    return 0;
}