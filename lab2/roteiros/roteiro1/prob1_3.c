#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno{
    char nome[100];
    int matricula;
    float nota;
}Aluno;

void aluno(Aluno v[], int n){
    Aluno y;
    Aluno z;
    int maior = 0;
    int menor = 100;
    for(int i=0; i<n; i++){
        if(v[i].nota > maior){
            maior = v[i].nota;
            strcpy(y.nome, v[i].nome);
            y.matricula = v[i].matricula;
            y.nota = v[i].nota;
        }
        if(v[i].nota < menor){
            menor = v[i].nota;
            strcpy(z.nome, v[i].nome);
            z.matricula = v[i].matricula;
            z.nota = v[i].nota;

        }
    }
    printf("\nMelhor aluno:\n%s\n%d\n%.2f\n", y.nome, y.matricula, y.nota);
    printf("\nPior aluno:\n%s\n%d\n%.2f\n", z.nome, z.matricula, z.nota);
}

int main(){
    Aluno x[3];
    for(int i=0; i<3; i++){
        scanf("%s\n%d\n%f", x[i].nome, &x[i].matricula, &x[i].nota);
    }
    aluno(x, 3);
    return 0;
}