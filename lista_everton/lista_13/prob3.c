#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplica_string(char str[]){
    char *x = (char*)malloc(sizeof(char) * (strlen(str)));
    for(int i=0; i<strlen(str); i++){
        x[i] = str[i];
    }
    return x;
}

int main(){
    char *y;
    y = duplica_string("Bola");
    printf("%s\n", y);
    free(y);
    return 0;
}