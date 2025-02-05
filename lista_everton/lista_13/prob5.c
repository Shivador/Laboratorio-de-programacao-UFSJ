#include <stdio.h>
#include <stdlib.h>

void desaloca_matriz(int **m, int num_l, int num_c){
    for(int i=0; i<num_l; i++){
        free(m[i]);
    }
    free(m);
}

int** duplica_matriz(int **m, int num_l, int num_c){
    int** x = (int**)malloc(sizeof(int*)*num_l);
    for(int i =0; i<num_c; i++){
        x[i] = (int*)malloc(sizeof(int)*num_c);
    }
    for(int i=0; i<num_l; i++){
        for(int j=0; j<num_c; j++){
            x[i][j] = m[i][j];
        }
    }
    return x;
}

int main(){
    int num_l = 3;
    int num_c = 3;
    int** z = (int**)malloc(sizeof(int*)*num_l);
    for(int i =0; i<num_c; i++){
        z[i] = (int*)malloc(sizeof(int)*num_c);
    }
    for(int i=0; i<num_l; i++){
        for(int j=0; j<num_c; j++){
            z[i][j] = (rand()%6) + 1;
        }
    }
    int** y = duplica_matriz(z,3,3);
    desaloca_matriz(y,3,3);
    desaloca_matriz(z,3,3);
    return 0;
}