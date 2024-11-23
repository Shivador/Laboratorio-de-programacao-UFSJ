#include <stdio.h>

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    int i = 1;
    int r = 0;
    while(y!=i){
        if(x%i==0 && y%i==0){
            r++;
        }
        i++;
    }
    if(r==1){
        printf("São primos entre si!\n");
    } else{
        printf("Não são primos entre si!\n");
    }
    

    return 0;
}