#include <stdio.h>

int main(){
    float n = 1;

    for(float i=0; i<2.2; i+=0.2){

        for(float j=n; j<=n+2; j++){
            printf("I=%g J=%g\n", i, j);
        }
        n+=0.2;
    }
    return 0;
}