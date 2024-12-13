#include <stdio.h>

int* menor(int *a, int *b){
	if(*a < *b){
		return a;
	}
	return b;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int *r;
    r = menor(&a, &b);
    printf("%d\n", *r);
    return 0;
}