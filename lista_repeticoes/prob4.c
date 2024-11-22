#include <stdio.h>

int main(){
    char x;
    int y;
    scanf("%c %d", &x, &y);

    for(int i=1; i<=y; i++){
        if(i==y){
            printf("%c.\n", x);
            break;
        }
        printf("%c,", x);
    }
    
    return 0;
}