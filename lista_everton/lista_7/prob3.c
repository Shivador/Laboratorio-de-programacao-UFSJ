#include <stdio.h>

int main(){
    int q = 0;
    int x;
    int media = 0;
    while(scanf("%d", &x) != EOF){
            if(x<0){
            break;
            }
        media = media + x;
        q++;
    }
    printf("Quantidade: %d\nMedia: %d\n", q, media/q);


return 0;
}