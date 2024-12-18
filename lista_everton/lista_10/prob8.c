#include <stdio.h>

struct Coordenada{
  float x;
  float y;
};

int existe_coordenada(struct Coordenada coordenadas[], int n, struct Coordenada coordenada){
    for(int i=0; i<n; i++){
        if((coordenadas[i].x == coordenada.x) && (coordenadas[i].y == coordenada.y)){
            return 1;
        }
    }
    return 0;
}

int main(){
    struct Coordenada X[5] = {1, 2, 3, 4, 7, 5, 4, 2, 6, 1};
    struct Coordenada y = {5,4};
    int r = existe_coordenada(X, 5, y);
    printf("Existe coordenada: %d\n", r);

    return 0;
}