#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
    system("color 0a");
	setlocale(LC_CTYPE, "ptb");
	int A[15], B[15], C[15], D[15], E[15], i, cont;
	for(i=0; i<15; i++){
		printf("O numero %d de A é: ", i+1); 
		scanf("%d", &A[i]);
		printf("O numero %d de B é: ", i+1); 
		scanf("%d", &B[i]);
	}
	for(i=0; i<15; i++){
		C[i] = 0;
		D[i] = 1;
		for(cont=A[i]; cont>0; cont--){
            C[i] += cont;            
            }             
		for(cont=B[i]; cont>1; cont--){
            D[i] *= cont;            
            }                    
	}

	printf("A diferença de C e d com a soma de A e B é\n");
	for(i=0; i<15; i++){
	    E[i] = (C[i] - D[i]) + (A[i] + B[i]);
	    printf("%d ", E[i]);
    }
	printf("\n");
	system("pause");
}

