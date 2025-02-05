#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int* frequencia_caracteres(char texto[]){
    int *x = (int*)malloc(sizeof(int) * 26);
    char l = 'a';
    for(int i=0; i<26; i++){
        x[i] = 0;
    }
    for(int j=0; j<26; j++){
        for(int i=0; i<strlen(texto); i++){
            if(texto[i] == l){
                x[j] += 1;
            }
        }
        l += 1;
    }
    return x;
}
int main(){
    int *y;
    y = frequencia_caracteres("paralelepipedo");
    for(int i=0; i<26; i++){
        printf("%d,", y[i]);
    }
    printf("\n");
    free(y);
    return 0;
}