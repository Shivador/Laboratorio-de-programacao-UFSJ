#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void alfabeto(char v[], int n){
    if(n < 0){
        return;
    } else {
        char letra = 'z';
        for(int i=26; i>0; i--){
            if(v[n] == letra){
                printf("%c ", v[n]);
                alfabeto(v, n-1);
            }
            letra--;
        }
    }
}

int main(){
    char string[100];
    fgets(string, 100, stdin);
    string[strlen(string)-1] = '\0';
    int n = strlen(string);
    alfabeto(string, n-1);
    return 0;
}