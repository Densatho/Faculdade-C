#include <stdio.h>
#include <string.h>

int codigo;
float quantidade, valor, imposto;
char produto[20];

int main()
{
start:
printf("printf o codigo do produto \n");
scanf("%d", &codigo);
printf("printf a quantidade de produtos \n");
scanf("%f", &quantidade);
printf("printf o valor do produto \n");
scanf("%f", &valor);
switch (codigo) {
	case 1000 :
		strcpy(produto, "tomate");
		imposto = 0.15;
				
		break;
	case 1009 :
		strcpy(produto, "Livro");
		imposto = 0;
		
		break;
	case 1013 :
		strcpy(produto, "Arroz");
		imposto = 0.19;

		break;
		
	default:
		strcpy(produto, "Demais produtos");
		imposto = 0.175;
}
printf("Valor total de %.2f, %s com valor de imposto de %.2f \n", quantidade*valor, produto, (quantidade*valor)*imposto);



}
