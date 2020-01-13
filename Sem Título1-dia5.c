#include <stdio.h>

int main(){
	int vetA[15],vetB[15],vetC[15],vetD[15],vetE[15],i,t,aux;
	system("color 0A");
	printf("Entre apenas com numeros positivos:\n\n");
	for (i=0;i<15;i++){;
		printf("Digite vetA[%i]:",i);
		scanf("%i",&vetA[i]);
		printf("Digite vetB[%i]:",i);
		scanf("%i",&vetB[i]);
	}
	for (i=0;i<15;i++)
	{
		aux=vetA[i];
		for (t=aux-1;t>0;t--)
		{
			aux=aux+t;
		}
		vetC[i]=aux;
	}
	for (i=0;i<15;i++)
	{
		aux=vetB[i];
		for (t=aux-1;t>0;t--)
		{
			aux=aux*t;
		}
		vetD[i]=aux;
	}
	for (i=0;i<15;i++){ //Vetor E
		vetE[i]=(vetC[i]-vetD[i])+(vetA[i]+vetB[i]);
	}
	printf("Vetor A:[");
	for (i=0;i<15;i++){
		printf(" %i ",vetA[i]);
	}
	printf("]\n");
	printf("Vetor B:[");
	for (i=0;i<15;i++){
		printf(" %i ",vetB[i]);
	}
	printf("]\n");
	printf("Vetor C:[");
	for (i=0;i<15;i++){
		printf(" %i ",vetC[i]);
	}
	printf("]\n");
	printf("Vetor D:[");
	for (i=0;i<15;i++){
		printf(" %i ",vetD[i]);
	}
	printf("]\n");
printf("Vetor E:[");
	for (i=0;i<15;i++){
		printf(" %i ",vetE[i]);
	}
	printf("]\n");
}

