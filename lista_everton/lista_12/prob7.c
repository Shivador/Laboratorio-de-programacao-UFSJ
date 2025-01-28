#include <stdio.h>

struct info{
    int eh_amigo;
    int grupos_comum; 
};

double media_grupos_por_amigo(struct info m[100][100], int pessoa){
    double grupos = 0;
    double amigos = 0;
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            if(m[pessoa][j].eh_amigo == 1){
                amigos += 1;
                grupos += m[pessoa][j].grupos_comum;
            }
        }
    }
    return grupos/amigos;
}

int devem_ser_amigos(struct info m[100][100], int pessoa1, int pessoa2){
    double media1 = media_grupos_por_amigo(m, pessoa1);
    double media2 = media_grupos_por_amigo(m, pessoa2);
    if(m[pessoa1][pessoa2].eh_amigo == 1){
        return 1;
    }
    
    if((m[pessoa1][pessoa2].grupos_comum > media1) && (m[pessoa1][pessoa2].grupos_comum > media2)){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    return 0;
}