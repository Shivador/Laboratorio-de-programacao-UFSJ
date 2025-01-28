#include <stdio.h>

void maiores_que_10(double m[][10], int linhas){
    printf("Valores maiores que 10: ");
    for(int i=0; i<linhas; i++){
        for(int j=0; j<10; j++){
            if(m[i][j] > 10){
                printf("%.0lf, ", m[i][j]);
            }
        }
    }
    printf("\n");
}

int main(){
    double m[2][10];
    for(int i=0; i<2; i++){
        for(int j=0; j<10; j++){
            scanf("%lf", &m[i][j]);
        }
    }
    maiores_que_10(m, 2);

    return 0;
}