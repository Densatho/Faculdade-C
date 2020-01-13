#include <stdio.h>
#include <math.h>

float N1, N2;
char Op;

int main(){
start:
printf("Escreva dois numero \n");
scanf("%f", &N1);
scanf("%f", &N2);
printf("Escreva a operacao \n");
scanf("%s", &Op);
switch (Op) {
	case '+' :
		printf("o resultado e %.2f", N1+N2);
		
		break;
	case '-' :
		printf("o resultado e %.2f", N1-N2);
		
		break;
	case '/' :
		printf("o resultado e %.2f", N1/N2);
	
		break;
	case '*' :
		printf("o resultado e %.2f", N1*N2);	
		
		break;
	case '^' :
		printf("o resultado e %.2f", pow(N1, N2));
	
		break;
	default:
		printf("Erro, digite um operador correto \n \n");
		goto start;
}
}
