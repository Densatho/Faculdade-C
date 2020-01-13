#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int n, i;
	do{
	printf("Escreva a quantidade de numeros que tera:");
	scanf("%d", &n);
	}while(n>1000);
	int a[n], b[n], c[n];
	for(i=0; i<n; i++){
		printf("O A do numero %d é de ", i+1); 
		scanf("%d", &a[i]);		
		printf("O B do numero %d é de ", i+1); 
		scanf("%d", &b[i]);
	}
	printf("\n");
	for(i=0; i<n; i++){
		c[i] = a[i] * b[i];
		printf("%d * %d = %d \n", a[i], b[i], c[i]) ;
	}
}

