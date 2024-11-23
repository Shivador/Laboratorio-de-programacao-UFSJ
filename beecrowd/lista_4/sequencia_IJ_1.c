#include <stdio.h>

int main(){
    int i=1;
    int j=60;
    while(1){
        printf("I=%d J=%d\n", i, j);
        i+=3;
        j-=5;
        if(j<0){
            break;
        }
    }
    return 0;
}