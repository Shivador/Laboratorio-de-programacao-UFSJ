#include <stdio.h>

char maiusculo(char x){
    if(x>96 && x<123){
        return x-32;
    } else if(x>64 && x<91){
        return x;
    } else{
        printf("Não é letra\n");
    }
}

int main(){
    char l;
    scanf("%c", &l);
    char a = maiusculo(l);
    printf("%c\n", a);
    return 0;
}