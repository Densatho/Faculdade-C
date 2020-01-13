#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int n, i, j, vet[10], x;
	for(i=0; i<10; i++){
		printf("valor do numero %d é de ", i+1);
		scanf("%d", &vet[i]);
	}
	for(j=0; j<81; j++){
		for(i=0; i<9; i++){
			if(vet[i+1]>vet[i]){
				x = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = x;			
			}
			
	}}
		printf("\n");
	for(i=0; i<10; i++){
		printf("Valor do numero %d = %d \n", i+1, vet[i]);
	}
}
