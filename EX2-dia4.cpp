#include <stdio.h>

int n, somaN = 0; 

int main(int argc, char *argv[]){
	printf("Escreva o valor de n:");
	scanf("%d", &n);
	if(n%2 != 0){
		n--;
	}
	for(; n >= 2; n-= 2){
		somaN += n;
	}
	printf("%d", somaN);
}
