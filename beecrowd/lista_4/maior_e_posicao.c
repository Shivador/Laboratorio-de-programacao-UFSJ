#include <stdio.h>

int main(){
    int maior = 0;
    int n;
    int pos = 0;
    int i;
    for(i=0; i<100; i++){
            scanf("%d\n",&n);
            if(n>maior){
                maior = n;
                pos = i + 1;
            }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
return 0;
}