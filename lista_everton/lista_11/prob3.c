#include <stdio.h>

int contaVogais(char *texto, int n){
    int q = 0;
    for(int i=0; i<n; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            q++;
        }
    }
    return q;
}

int main(){
    char x[10];
    scanf("%s", x);
    int r = contaVogais(x, 10);
    printf("Número de vogais: %d\n", r);

    return 0;
}