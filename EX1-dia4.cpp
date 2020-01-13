#include <stdio.h>

int n, somaN = 0; 

int main(int argc, char *argv[]){
	printf("Escreva o valor de n:");
	scanf("%d", &n);
	for(; n >= 1; n--){
		somaN += n;
	}
	printf("%d", somaN);
}
