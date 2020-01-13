#include <stdio.h>
#include <locale.h>

int maior = 0, menor = 10000, n=0;
float media;

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	do{
		printf("escreva um numero:");
		scanf("%d", &n);
		if(menor>n && n>0){
			menor = n;
		}
		if(maior<n){
			maior = n;
		}
	} while(n > 0);
	printf("O maior valor é %d, e o menor valor é de %d.", maior, menor);
}
