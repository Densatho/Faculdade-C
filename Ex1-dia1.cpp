#include <stdio.h>

float P1, P2, MD;

int main(){
	Start:
	printf("Escreva a primeira nota \n");
	scanf("%f", &P1);
	printf("Escreva a segunda nota \n");
	scanf("%f", &P2);
	MD = (float) (P1+P2)/2;
	MD >= 6 ? printf("Aprovado com a nota %.2f \n", MD) : printf("Reprovado com a nota %.2f \n", MD);
	
	
	goto Start;
	
	
}



