#include <stdio.h>
#include <locale.h>

int fatorial = 1, n, vN;
float media;

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	printf("Escreva um numero:");
	scanf("%d", &n);
	vN = n;
	do{
		fatorial *= n;
		n--;
	} while(n > 1);
	printf("o valor fatorial do numero %d é de %d", vN, fatorial);
}
