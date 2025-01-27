#include <stdio.h>

int main(){
    char x[5];
    scanf("%s", x);
    char temp[5];
    int q = 3;
    for(int i=0; i<4; i++){
        temp[q] = x[i];
        q--;
    }
    printf("%s\n", temp);


    return 0;
}