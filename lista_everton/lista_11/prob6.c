#include <stdio.h>
#include <string.h>

void inverteString(char string[]){
    int n = strlen(string);
    int q = n-1;
    char temp[5];
    for(int i=0; i<n; i++){
        temp[i] = string[q];
        q--;
    }
    temp[n] = '\0';
    printf("%s\n", temp);
}

int main(){
    inverteString("faca");

    return 0;
}