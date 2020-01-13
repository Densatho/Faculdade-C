#include <stdio.h>
#include <locale.h>

int n, n1, nP=0; 

int main(int argc, char *argv[]){

	FILE *arquivo;

	arquivo = fopen("F:\\Arquivos e Programas\\IFSP\\LP1I1\\exercicios das aulas\\04_18\\saida.txt", "a");
	
	

	setlocale(LC_CTYPE, "ptb");
	printf("Escreva o valor de n:");
	fprintf(arquivo , "Escreva o valor de n:");
	scanf("%d", &n);
	fprintf(arquivo, "%d\n", n);
	n1 = n - 1;
	for(; n1 >= 2; n1--){
		if(n%n1==0){
			nP = 1;
		}
	}
	if(nP == 0){
		printf("\nO numero %d é primo", n);
		fprintf(arquivo, "O numero %d é primo\n", n);
	}
	else{
		printf("\nO numero %d não é primo", n);
		fprintf(arquivo,  "O numero %d não é primo\n", n);
	}
	
	fclose(arquivo);
	
}
