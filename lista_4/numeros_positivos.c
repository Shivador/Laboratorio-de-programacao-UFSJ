#include <stdio.h>

int main(){

    float n;
    int i;
    int qnt = 0;

    for(i = 0; i < 6; i++){

        scanf("%f\n", &n);
        if(n > 0){

            qnt++;

        }
    }
    printf("%d valores positivos\n", qnt);
    
return 0;
}