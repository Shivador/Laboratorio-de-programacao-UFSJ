#include <stdio.h>

int main(){
   int x, y;
   scanf("%d %d", &x, &y);

   for(int i=x; i<=y; i++){
        for(int j=x; j<=y; j++){
            printf("%d ", i*j);
        }
        printf("\n");
   }


    return 0;
}