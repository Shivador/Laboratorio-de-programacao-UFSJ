#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int fat = n;
    
    for(int i=n-1; i>1; i--){
        fat = fat * i;
        
    }
    printf("Fatorial: %d\n", fat);




    return 0;
}