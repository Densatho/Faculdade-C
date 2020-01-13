#include <stdio.h>
#include <locale.h>

int i, j, k;

int main(){
setlocale(LC_CTYPE, "ptb");
for (i=0 ; i < 5 ; i++){
	for (j=0 ; j < (5-i) ; j++){
		printf(" ");
	}
	for (j=0 ; j<(2*i - 1) ; j++){
		printf("*");
	}
	
	printf("\n");
} 
}
