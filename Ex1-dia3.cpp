#include <stdio.h>
#include <locale.h>

int a = 0, b, c, i, soma = 0;

int main(){
setlocale(LC_CTYPE, "ptb");
while (a<1){
 	printf("Digite A (maior que 1)= ");
 	scanf("%i", &a); 	
 }	
printf("Digite B= ");
scanf("%i", &b);
printf("digite C= ");
scanf("%i", &c);

for ( i = b; i <= c; i++){
	if (i%a == 0){
		soma += i;
	}
}
	printf("A soma dos multiplo de %i entre %i e %i é %i", a , b , c , soma);	
}
