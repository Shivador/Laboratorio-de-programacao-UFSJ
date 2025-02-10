/*#include <stdio.h>
#include <string.h>

int main(){
	int sudoku[9][9], testador[9], h, i, j, k, n, coluna, linha, bloco;

	scanf("%d", &n);

	for(h = 1; h <= n; h++){
		for(i = 0; i < 9; i++)
			for(j = 0; j < 9; j++)
				scanf("%d", &sudoku[i][j]);

		for(linha = 0, i = 0; i < 9; i++){
			memset(testador, 0, sizeof(testador));
			for(j = 0; j < 9; j++) testador[sudoku[i][j] - 1]++;
			for(j = 0; j < 9; j++) if(testador[j] == 1) linha++;
		}

		for(coluna = 0, i = 0; i < 9; i++){
			memset(testador, 0, sizeof(testador));
			for(j = 0; j < 9; j++) testador[sudoku[j][i] - 1]++;
			for(j = 0; j < 9; j++) if(testador[j] == 1) coluna++;
		}

		for(bloco = 0, i = 2; i < 9; i += 3)
			for(j = i - 2; j <= i; j++){
				memset(testador, 0, sizeof(testador));
				for(k = 0; k < 9; k++) testador[sudoku[j][k] - 1]++;
				for(k = 0; k < 9; k++) if(testador[k] == 1) bloco++;
			}

		if(linha == 81 && coluna == 81 && bloco == 81){
			printf("Instancia %d\n", h);
			printf("SIM\n\n");
		}
		else{
			printf("Instancia %d\n", h);
			printf("NAO\n\n");
		}
	}
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  	int matriz[9][9], testador[10], i, j, k, h, n, teste = 0;
   
  	scanf("%d",&n);
  
  	for(h = 1; h <= n; h++){
    	
    	teste = 0;
    	
    	for(i = 0; i < 9; i++){
      		for(j = 0; j < 9; j++)
    			scanf("%d",&matriz[i][j]);
    	}
     
	    for(i = 0 ; i < 9 && !teste; i++){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testador[matriz[i][j]])
	      			teste = 1;
	    		else
	      			testador[matriz[i][j]] = 1;
	      	}
	    }
	     
	    for(i = 0; i < 9 && !teste; i++){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testador[matriz[j][i]])
	      			teste = 1;
	    		else
	      			testador[matriz[j][i]] = 1;
	      	}
	    }
	     
	    for(i = 2; i < 9 && !teste; i+=3){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = i - 2; j <= i && !teste; j++){
	    		for(k = i - 2; k <= i && !teste; k++){
	      			if(testador[matriz[j][k]])
	        			teste = 1;
	      			else
	        			testador[matriz[j][k]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",h);
	    printf("%s\n\n",(!teste)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}