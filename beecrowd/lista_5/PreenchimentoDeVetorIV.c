#include <stdio.h>


int main(){
    int temp_par;
    int temp_im;
    int x[15];
    for(int i=0; i<15; i++){
        scanf("%d", &x[i]);
    }
    int p, im;
    p = 5;
    im = 5;
    int par[p];
    int impar[im];
    p = 0;
    for(int i=0; i<15; i++){
         if(x[i] %  2 == 0 ){
            par[p] = x[i];
            p++;
         }
         if(p == 5){
            temp_par = i;
            break;
         }
    }
    for(int i=0; i<p; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }
    im = 0;
    for(int i=0; i<15; i++){
         if(x[i] %  2 != 0 ){
            impar[im] = x[i];
            im++;
         }
         if(im == 5){
            temp_im = i;
            break;
         }
    }
    for(int i=0; i<im; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    im = 0;
    for(int i=temp_im+1; i<15; i++){
         if(x[i] %  2 != 0 ){
            impar[im] = x[i];
            im++;
         }
         if(im == 5){
            break;
         }
    }
    for(int i=0; i<im; i++){
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    
    p = 0;
    for(int i=temp_par+1; i<15; i++){
         if(x[i] %  2 == 0 ){
            par[p] = x[i];
            p++;
         }
         if(p == 5){
            break;
         }
    }
    for(int i=0; i<p; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }

    

    return 0;
}