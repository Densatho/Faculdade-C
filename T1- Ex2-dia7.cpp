#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(){
  	int i = 0, nVendedores;
  	float vendas;
  	
  	printf("Digite a quantidade de vendedores: ");
  	scanf("%d", &nVendedores);
  	
      for(i=0; i < nVendedores; i++){
        printf("\nDigite a quantidade de vendas: ");
        scanf("%f", &vendas);
		if(vendas <= 5000){
			vendas = vendas * 0.2;
			printf("\nA sua comissao = %.2f", vendas);
		}
		if(vendas > 5000.01 && vendas <= 10000){
			vendas = vendas * 0.5;
			printf("\nA sua comissao = %.2f", vendas);
		}
		if(vendas > 10000.01 && vendas < 15000){
			vendas = vendas * 0.7;
			printf("\nA sua comissao = %.2f", vendas);
		}
		if(vendas > 15000){
			vendas = vendas * 0.9;
			printf("\nA sua comissao = %.2f", vendas);
	    }
     }
	  return 0;
     system("pause");
  }
