#include <stdio.h>

typedef struct{
  int id;
  int duracao;
  int ano;
} Filme;

void imprime_filme(Filme filmes[], int n, int id){
    int r = 0;
    for(int i=0; i<n; i++){
        if(filmes[i].id == id){
            printf("Duração: %d minutos\nAno: %d\n", filmes[i].duracao, filmes[i].ano);
            r = 1;
        }
    }
    if(r==0){
        printf("Filme com id %d não existe\n", id);
    }
}

int main(){
    Filme X[2];
    for(int i=0; i<2; i++){
        scanf("%d", &X[i].id);
        scanf("%d", &X[i].duracao);
        scanf("%d", &X[i].ano);
    }
    int id = 402;
    imprime_filme(X, 2, id);
    return 0;
}