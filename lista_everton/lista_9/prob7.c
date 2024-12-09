#include <stdio.h>

void maior_menor(int *end_var1, int *end_var2){
    if(*end_var1 > *end_var2){
        *end_var1 = *end_var1;
        *end_var2 = *end_var2;
    } else if(*end_var2 > *end_var1){
        int temp = *end_var1;
        *end_var1 = *end_var2;
        *end_var2 = temp;
    }
}

int main(){
    int x, y;
    int *end_var1 = &x;
    int *end_var2 = &y;
    scanf("%d %d", &x, &y);
    maior_menor(&x, &y);
    printf("Maior: %d\nMenor: %d\n", *end_var1, *end_var2);

    return 0;
}