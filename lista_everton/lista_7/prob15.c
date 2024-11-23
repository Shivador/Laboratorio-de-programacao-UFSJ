#include <stdio.h>

int main(){
    int x,y;
    scanf("%d %d", &x, &y);
    printf("    1 2 3 4 5 6 7 8\n");
    printf("   ----------------\n");
    for(int i=1; i<=8; i++){
        printf("%d | ", i);
        for(int j=1; j<=8; j++){
            if(i==x || j==y){
                printf("x ");
            } else{
                printf("- ");
            }
        }
        printf("\n");
    }
    return 0;
}