#include <stdio.h>
#include <stdlib.h>

double diagonal_secundaria(double m[100][100]){
    int q = 99;
    double soma = 0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(j==q){
                soma += m[i][j];
            }
        }
        q--;
    }
    return soma;
}

int main(){
    double m[100][100];
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            m[i][j] = (rand() % 9) +1;

        }
    }
    double soma = diagonal_secundaria(m);
    printf("Soma da diagonal secundaria : %.0lf\n", soma);

    return 0;
}