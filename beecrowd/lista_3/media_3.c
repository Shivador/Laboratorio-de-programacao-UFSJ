#include <stdio.h>

    int main(){
       float a, b, c, d;
       scanf("%f %f %f %f",&a, &b, &c, &d);

       float media = (a*2 + b*3 + c*4 + d*1)/10;
 
       if (media>=7.0){
        printf("Media: %.1f\nAluno aprovado.\n", media);
       } else if (media<5.0) {
        printf("Media: %.1f\nAluno reprovado.\n", media);
       } else if (media>=5.0 && media<=6.9){
        float nota_exame;
        scanf("%f", &nota_exame);
        float media_final = (nota_exame + media) / 2; if(media_final>=5.0){
          printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", media, nota_exame, media_final);

        } else {
          printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", media, nota_exame, media_final);
        }


       }
       
        return 0;
      }