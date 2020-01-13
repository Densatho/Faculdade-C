#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>




int main(){
	system("Color 0A");
	setlocale(LC_CTYPE, "ptb");
	int i = 0 , j = 0;
	float salario, inss, porcentagem;
	char escolha, falha;
	while(i == 0){
		printf("Digite o valor do seu salario: ");
		scanf("%f", &salario);
		if(salario <= 600){
			inss = salario * 0.93;
			porcentagem = salario * 0.07;
		} else {
			if(salario <= 800){
				porcentagem = salario * 0.08;
				inss = salario * 0.92;
			} else {
				if(salario <= 1200){
					porcentagem = salario * 0.09;
					inss = salario * 0.91;		
				} else {
					porcentagem = salario * 0.11;
					inss = salario * 0.89;
				}
			}
		}
					
		printf("O valor do salario = %.2f, e o valor que será retirado do salario é de %.2f, assim sendo, recebera %.2f\n", salario, porcentagem, inss);
		printf("Você deseja continuar? <S>im ou <N>ão\n");
		scanf("%c", &falha);
		scanf("%c", &escolha);
		while(j == 0){
			switch(escolha){
				case 's':
				case 'S':
					j = 1;
					
				break;
					
				case 'n':
				case 'N':
					i = 1;
					j = 1;
				break;
				
				default:
					printf("Opção incorreta\n");
			}
		}
		j = 0;
		
	} 
	
	
	
	system("Pause");
}
