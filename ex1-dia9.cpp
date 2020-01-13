#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


void somatoria(int x){
	int r=0;
	for(int i = x; i > 0; i--){
		r += i;	
	}
	printf("%d\n", r);
	
	
	
}


int main(){
	system("Color 0A");
	int valor;
	scanf("%d", &valor);
	somatoria(valor);
	
	system("Pause");
	
	
	
	
	
}
