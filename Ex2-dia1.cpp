#include <stdio.h>

float P1, P2, T1, T2, MD;

int main(){
	Start:
	printf("Escreva a primeira nota da prova \n");
	scanf("%f", &P1);
	printf("Escreva a segunda nota da prova \n");
	scanf("%f", &P2);
	printf("Escreva a primeira nota trabalho \n");
	scanf("%f", &T1);
	printf("Escreva a segunda nota trabalho \n");
	scanf("%f", &T2);
	MD = (float) ((P1*0.8)+(P2*0.8)+(T1*0.2)+(T2*0.2))/2;
	MD >= 6 ? printf("Aprovado com a nota %.2f \n \n", MD) : printf("Reprovado com a nota %.2f \n \n", MD);
	
	
	goto Start;
	
	
}



