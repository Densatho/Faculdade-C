#include <stdio.h>
#include <locale.h>

int fatorial = 1, contador = 3, n;
float media;

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	do{
		n = contador;
		do{
			fatorial *= n;
			n--;
		} while(n > 1);
		printf("o valor fatorial do numero %d é de %d\n", contador, fatorial);
		contador += 2;
		fatorial = 1;
	}while (contador<10);
	
}
