#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int i, j, vet[10], x, op;
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
	escolha:
	printf("Escreva 0 para ordem crescente e 1 para a ordem decrescente\n");
	scanf("%d", &op);
	switch(op){
		case 0:
			for(i=9; i>=0; i--){
				printf("%d ", vet[i]);
	}
		break;
		case 1:
			for(i=0; i<10; i++){
				printf("%d ", vet[i]);
	}
		break;
		default:
			printf("valor incorreto\n");
			goto escolha;
	}

}
