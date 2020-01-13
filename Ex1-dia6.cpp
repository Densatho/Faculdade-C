#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
    system("color 0a");
	setlocale(LC_CTYPE, "ptb");
	int i;
	float vet[10];
	for(i=0; i<10; i++){
		printf("O numero %d de vet é: ", i+1); 
		scanf("%f", &vet[i]);
	}
	for(i=0; i<10; i++){
        printf("%.2f ", vet[i]);            
    }             
	for(i=9; i>=0; i--){
        printf("%.2f ", vet[i]);            
    }      
	printf("\n");
	system("pause");
}

