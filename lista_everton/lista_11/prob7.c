#include <stdio.h>
#include <string.h>

struct dados{
    char nome[30];
    int idade;
    char sexo;
    char cpf[10];
    char data[10];
    int cod;
    char cargo[30];
    int salario;
};

int main(){
    struct dados x;
    fgets(x.nome, 30, stdin);
    x.nome[strlen(x.nome)-1] = '\0';
    scanf("%d\n", &x.idade);
    scanf("%c\n", &x.sexo);
    fgets(x.cpf, 10, stdin);
    x.cpf[strlen(x.cpf)-1] = '\0';
    fgets(x.data, 10, stdin);
    x.data[strlen(x.data)-1] = '\0';
    scanf("%d\n", &x.cod);
    fgets(x.cargo, 30, stdin);
    x.cargo[strlen(x.cargo)-1] = '\0';
    scanf("%d\n", &x.salario);
    printf("%s\n", x.nome);
    printf("%d\n", x.idade);
    printf("%c\n", x.sexo);
    printf("%s\n", x.cpf);
    printf("%s\n", x.data);
    printf("%d\n", x.cod);
    printf("%s\n", x.cargo);
    printf("%d\n", x.salario);
    return 0;
}