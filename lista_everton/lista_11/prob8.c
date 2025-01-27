#include <stdio.h>
#include <string.h>

typedef struct carro{
    char modelo[15];
    int ano;
    float preco;
    char marca[15];
}Carro;

void listaCarros(Carro *carros, float x){
    for(int i=0; i<3; i++){
        if(carros[i].preco < x){
            printf("Modelos: %s\n", carros[i].modelo);
        }
    }
}

int main(){
    Carro x[3];
    for(int i=0; i<3; i++){
        fgets(x[i].modelo, 15, stdin);
        x[i].modelo[strlen(x[i].modelo)-1] = '\0';
        scanf("%d", &x[i].ano);
        scanf("%f\n", &x[i].preco);
        fgets(x[i].marca, 15, stdin);
        x[i].marca[strlen(x[i].marca)-1] = '\0';
    }
    listaCarros(x, 10000);
    return 0;
}