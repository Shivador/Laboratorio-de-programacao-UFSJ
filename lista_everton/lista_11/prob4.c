#include <stdio.h>

void substituir(char *texto, char letra){
    for(int i=0; i<5; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
            texto[i] = letra;
        }
    }

    printf("%s\n", texto);

}

int main(){
    char x[5];
    scanf("%s", x);
    substituir(x, 'r');

    return 0;
}