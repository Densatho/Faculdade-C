#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int n, i;
	do{
	printf("Escreva a quantidade de numeros que tera:");
	scanf("%d", &n);
	}while(n>1000);
	int vet[n];
	for(i=0; i<n; i++){
		printf("valor do numero %d é de ", i+1);
		scanf("%d", &vet[i]);
	}
	printf("\n");
	for(i=(n-1); i>=0; i--){
		printf("Valor do numero %d = %d \n", i+1, vet[i]);
	}
}
