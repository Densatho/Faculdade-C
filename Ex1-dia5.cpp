#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int v[12], vX[12], i, x;
	
	for(i=0; i<12; i++){
		printf("valor do numero %d é de ", i+1);
		scanf("%d", &v[i]);
	}
	printf("o valor que vai multiplicar é ");
	scanf("%d", &x);
	for (i=0; i<12; i++){
		vX[i] = v[i]*x;		
	}	
	for(i=0; i<12; i++){
		printf("%d * %d = %d\n", v[i], x, vX[i]);		
	}
	
	
	
}
