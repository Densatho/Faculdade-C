#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int n, i, x, v=0;
	do{
	printf("Escreva a quantidade de numeros que tera:");
	scanf("%d", &n);
	}while(n>1000);
	int vet[n];
	for(i=0; i<n; i++){
		printf("O numero %d é de: ", i+1); 
		scanf("%d", &vet[i]);
	}
	printf("Escreva um numero de comparação");
	scanf("%d", &x);
	for(i=0; i<n; i++){
		if(vet[i] == x){
			v++;
		}
	}
	printf("A quantidade de vezes que o numero %d aparece é de %d", x, v);
}

