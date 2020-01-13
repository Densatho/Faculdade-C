#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int i, maiorN=-200000, menorN=2000000, op, vet[10];
	for(i=0; i<10; i++){
		printf("O numero %d é de: ", i+1); 
		scanf("%d", &vet[i]);
		if(maiorN < vet[i]){
			maiorN = vet[i];			
		}
		if(menorN > vet[i]){
			menorN = vet[i];			
		}		
	}
	escolha:
	printf("Escreva 0 para apresentar o menor numeor e 1 para a aprensentar o maior\n");
	scanf("%d", &op);
	switch(op){
		case 0:
			printf("%d ", maiorN);
		break;
		case 1:
			printf("%d ", menorN);
		break;
		default:
			printf("valor incorreto\n");
			goto escolha;
	}
}

