#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    
    for(int i=a; i<=b; i++){
        int ehprimo = 1;
        for(int x=2; x<i; x++){
            if(i%x==0){
                ehprimo = 0;
                
            }
        }
        if(ehprimo==1){
            printf("%d ", i);
        
        }
    }
    printf("\n");
    return 0;
}