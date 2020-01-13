#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
	int n, i=0, cont=0, contador;
	FILE *arquivo;	
	
	arquivo = fopen("C:\\Users\\Aluno\\Desktop\\saida.txt", "w");
	
	

	setlocale(LC_CTYPE, "ptb");
	do{ 
		printf("Escreva a quantidade de alunos:");
		scanf("%d", &n);
	}while(n >= 1000);
	
	fprintf(arquivo , "A quantidade de alunos é ");
	fprintf(arquivo, "%d\n", n);
	float nota[n];
	for(contador = 0; contador < n; contador++, i++){
		printf("Escreva a nota do aluno de numero %d:", i+1);
		scanf("%f", &nota[i]);
	}
	i=0;
	for(contador = 0; contador < n; contador++, i++){
		printf("O aluno %d, tem uma nota de %.1f\n", i+1, nota[i]);
		fprintf(arquivo, "O aluno %d, tem uma nota de %.1f\n", i+1, nota[i]);		
	}
	
	fclose(arquivo);
	
}
