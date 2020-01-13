#include <stdio.h>
#include <locale.h>

int somatorio, contador=0, n;
float media;

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	do{
		printf("Escreva um valor:");
		scanf("%d", &n);
		somatorio += n;
		contador ++;
	} while(contador < 10);
	media = somatorio/10.0;
	printf("O valor da soma desses valores é %d, e o valor da media e de %.2f.", somatorio, media);
}
