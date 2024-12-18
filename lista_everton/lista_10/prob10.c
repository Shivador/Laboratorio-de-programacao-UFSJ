#include <stdio.h>
#include <math.h>

void separaParesImpares(int v[], int tam){
    int par[tam];
    int impar[tam];
    int final[tam];
    int temp = 0;
    for(int i=0; i<tam; i++){
        par[i] = (int)INFINITY;
        impar[i] = (int)INFINITY;
    }
    int p = 0, im = 0;
    int aux;
    for(int i=0; i<tam; i++){
        if(v[i] % 2 == 0){
            par[i] = v[i];
            p++;
        }else{
            impar[i] = v[i];
            im++;
        }
    }
    for(int i=0; i<tam; i++){
        for(int j=i+1; j<tam; j++){
            if(par[i] > par[j]){
                aux = par[j];
                par[j] = par[i];
                par[i] = aux;
            }
        }
    }
    for(int i=0; i<tam; i++){
        for(int j=i+1; j<tam; j++){
            if(impar[i] > impar[j]){
                aux = impar[j];
                impar[j] = impar[i];
                impar[i] = aux;
            }
        }
    }
    for(int i=0; i<p; i++){
        final[i] = par[i];
    }
    for(int i=p; i<p+im; i++){
        final[i] = impar[temp];
        temp++;
    }
    for(int i=0; i<tam; i++){
        printf("Final[%d]: %d\n", i, final[i]);
    }
    
}
int main(){
    int X[5] = {5,4,3,2,1};
    separaParesImpares(X, 5);
    return 0;
}