#include <stdio.h>
#include <locale.h>

int somatorio, contador=48, n=0;
float media;

int main(int argc, char *argv[]){
	setlocale(LC_CTYPE, "ptb");
	do{
		contador += 2;
		somatorio += contador;
		n ++;
	} while(contador < 70);
	media = somatorio/n;
	printf("O valor da soma desses valores é %d, e o valor da media e de %.2f.", somatorio, media);
}
