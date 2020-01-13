#include <stdio.h>
#include <locale.h>

int n1 = 0, n2= 3, i;

int main(){
setlocale(LC_CTYPE, "ptb");
while (n1<=1){
	printf("\nEscreva um numero (positivo)=");
	scanf("%d", &n1);
 }	
 while (n2 != 0 && n2 != 1){
 	printf("\nEscreva 1 para uma contagem regressiva, e 0 para uma contagem progressiva apartir do 0=");
 	scanf("%d", &n2);
 }
 if(n2 == 1){
 	i = n1;
 	for (i; i >= 0; i--){
 		printf("%d ", i); 
	}
 }
 else{
  	for (i=0; i <= n1; i++){
	   	printf("%d ", i); 	
	   }
 }
}
