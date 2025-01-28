#include <stdio.h>

int main(){
    int N[20];
    for(int i=0; i<20; i++){
        scanf("%d", &N[i]);
    }
    int temp;
    temp = 19;
    int aux[temp];
    for(int i=0; i<20; i++){
        aux[temp] = N[i];
        temp--;
    }
    for(int i=0; i<20; i++){
        printf("N[%d] = %d\n", i, aux[i]);
    }
    return 0;
}