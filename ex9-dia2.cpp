#include <stdio.h>
#include <string.h>

float salario;

int main()
{
start:
printf("Escreva o seu salario \n");
scanf("%f", &salario);
if(salario <= 1903.98){
	printf("Esta isento de imposto");
}
else {
	if(salario <= 2826.65){
	printf("O valor de imposto e de %.2f", (salario*0.075));	
	}
	else{
		if(salario <= 3751.05){
			printf("O valor de imposto e de %f.2", (salario*0.15));
		}
		else{
			if(salario <= 4.664,68){
			printf("O valor de imposto e de %f.2", (salario*0.225));
			}
			else{
				printf("O valor de imposto e de %f.2", (salario*0.275));
			}
		}
	}	
}
}
