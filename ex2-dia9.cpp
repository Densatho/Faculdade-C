#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int somatoria(int x){
	int r=0;
	for(int i = x; i > 0; i--){
		r += i;	
	}
	return r;
	
	
	
}


int main(){
	system("Color 0A");
	int valor;
	scanf("%d", &valor);
	printf("%d\n", somatoria(valor));
	
	system("Pause");
	

	
}
