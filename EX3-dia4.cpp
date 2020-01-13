#include <stdio.h>
#include <locale.h>

int n, n1, nP=0; 

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	printf("Escreva o valor de n:");
	scanf("%d", &n);
	n1 = n - 1;
	for(; n1 >= 2; n1--){
		if(n%n1==0){
			nP = 1;
		}
	}
	if(nP == 0){
		printf("O numero %d é primo", n);
	}
	else{
		printf("O numero %d não é primo", n);
	}
}
