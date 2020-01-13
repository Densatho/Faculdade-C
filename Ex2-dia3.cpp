#include <stdio.h>
#include <locale.h>

int n = 0, i;

int main(){
setlocale(LC_CTYPE, "ptb");
while (n<=500){
	printf("\n Escreva um numero (positivo)=");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
 		printf("%d ", n); 	
}

 }	
}
