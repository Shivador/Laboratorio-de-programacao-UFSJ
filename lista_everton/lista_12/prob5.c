#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            a[i][j] = (rand() % 9) +1;
            b[i][j] = (rand() % 9) +1;
        }
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            c[i][j] = 0;
        }
    }
    for(int y=0; y<10; y++){
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                c[y][i] += a[y][j] * b[j][i];
            }

        }   
    }
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}