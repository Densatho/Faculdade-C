#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	system("Color 0A");
	setlocale(LC_CTYPE, "ptb");
	int vet[10], i, j, aux;
	
	for (i = 0; i < 10; i++){
		printf("Digite o valor da posição %d: ", i);
		scanf("%d", &vet[i]);		
	}
	for(j = 0; j < 9; j++){
		for (i = 0; i < 9; i++){
			if(vet[i] > vet[i+1]){
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
			}		
		}
	}
	printf("Em ordem crescente fica:\n");
	for (i = 0; i < 10; i++){
		printf("%d ", vet[i]);		
	}
	
	printf("\n");
	system("Pause");
}
