#include <stdio.h>
#include <string.h>

struct livro{
    char titulo[30];
    int ano;
    char autor[15];
};

void procura_livro(struct livro *v, int n, char *autor){
    for(int i=0; i<n; i++){
        if(strcmp(v[i].autor, autor) == 0){
            printf("Livros do autor: %s\n", v[i].titulo);
        }
    }
}

int main(){
    struct livro x[3];
    for(int i=0; i<3; i++){
        fgets(x[i].titulo, 30, stdin);
        x[i].titulo[strlen(x[i].titulo)-1] = '\0';
        scanf("%d\n", &x[i].ano);
        fgets(x[i].autor, 15, stdin);
        x[i].autor[strlen(x[i].autor)-1] = '\0';
    }
    procura_livro(x, 3, "pedro");

    return 0;
}