#include <stdio.h>
#include <string.h>

struct Filme{
  int ano;
  char titulo[100];
  int duracao;
};

void lista_filmes(struct Filme filmes[], int n){
  for(int i=0; i<n; i++){
    printf("Filmes: %s\n", filmes[i].titulo);
  }
}

void lista_filmes_ano(struct Filme filmes[], int n, int ano){
   for(int i=0; i<n; i++){
    if(filmes[i].ano == ano){
      printf("Filmes do ano %d: %s\n", filmes[i].ano, filmes[i].titulo);
    }
  }
} 

void lista_filmes_duracao(struct Filme filmes[], int n, int duracao){
   for(int i=0; i<n; i++){
    if(filmes[i].duracao == duracao){
      printf("Filmes com duraçao %d: %s\n", filmes[i].duracao, filmes[i].titulo);
    }
  }
}

int main(){
  struct Filme x[3];
  for(int i=0; i<3; i++){
    scanf("%d\n", &x[i].ano);
    fgets(x[i].titulo, 100, stdin);
    x[i].titulo[strlen(x[i].titulo)-1] = '\0';
    scanf("%d", &x[i].duracao);
  }
  lista_filmes(x, 3);
  lista_filmes_ano(x, 3, 2000);
  lista_filmes_duracao(x, 3, 180);
  return 0;
}