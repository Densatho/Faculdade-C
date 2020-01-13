#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int n, i, x, v=0, maiorN=-200000, menorN=2000000;
	do{
	printf("Escreva a quantidade de numeros que tera:");
	scanf("%d", &n);
	}while(n>1000);
	int vet[n];
	for(i=0; i<n; i++){
		printf("O numero %d é de: ", i+1); 
		scanf("%d", &vet[i]);
		if(maiorN < vet[i]){
			maiorN = vet[i];			
		}
		if(menorN > vet[i]){
			menorN = vet[i];			
		}		
	}
	printf("O maior numero é %d e o menor numero é %d", maiorN, menorN);
}

