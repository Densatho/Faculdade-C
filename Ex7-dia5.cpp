#include <stdio.h>
#include <locale.h>


int main(int argc, char*argv[]){
	setlocale(LC_CTYPE, "ptb");
	int x, vet[10], cont, z, i = 0;
	printf("O valor de X é de "); 
	scanf("%d", &x);
	if(x % 2 == 0){
		z = x + 21;
		for(cont= x + 1 ; cont<z; cont+=2 ,i++){
			vet[i] = cont;
			printf("%d\n", vet[i]);
		}	
	}
	else{
		z = x + 22;
		for(cont= x + 2 ; cont<z; cont+=2 ,i++){
			vet[i] = cont;
			printf("%d\n", vet[i]);	
		}		
	}
}

