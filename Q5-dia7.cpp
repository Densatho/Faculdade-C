#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	system("Color 0A");
	setlocale(LC_CTYPE, "ptb");
	int n, i, aux = 0;
	do{
		printf("Digite um numero positivo acima de 1: ");
		scanf("%d", &n);
	} while(n < 2);
		
	for (i = (n - 1); i > 1; i--){
		if(n % i == 0){
			aux = 1;
		}		
	}

	if(aux == 0){
		printf("O numero %d é primo\n", n);
	} else {
		printf("O numero %d não é primo\n", n);	
	}
	
	system("Pause");
}
