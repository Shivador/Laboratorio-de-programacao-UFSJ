#include <stdio.h>

void parte(char S[], int i, int j){
    S[j] = '\0';
    printf("%s\n", &S[i]);
}

int main(){
    char x[10];
    scanf("%s", x);
    parte(x, 3, 7);


    return 0;
}