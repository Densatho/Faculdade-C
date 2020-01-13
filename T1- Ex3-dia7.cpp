#include <Stdio.h>
#include <stdlib.h>
#include <math.h>
  
   int main(){
   	 int i, codigo, cestaBasica, eletronicos, servicos, demaisProdutos;
	 float imposto, preco;
	 	
	 	system("color 0C");
		printf("O codigo da cesta basica: %d", 1000);
        printf("\nO codigo dos eletronicos: %d", 1010);
        printf("\nO codigo dos servicos: %d", 1020);
        printf("\nO codigo dos demais produtos: %d", 1030);
        
        do{
		
        printf("\nDigite um codigo: ");
        scanf("%d", &codigo);
        
        switch(codigo){
        	case 1000: 
        	       printf("\n Qual o preco da Cesta Basica: ");
        	       scanf("%f", &preco);
        	       imposto = 0;
         	       printf("\n O imposto para a Cesta Basica = %.2f e o valor a ser pago = %.2f", imposto, preco);
         	       i = 1;
                     break;
            
           	case 1010: 
             	   printf("\n Qual o preco dos Eletronicos: ");
        	       scanf("%f", &preco);
        	       imposto = preco * 0.25; 
         	       printf("\n O imposto para os Eletonicos = %.2f e o valor a ser pago = %.2f", imposto, preco + imposto);
         	       i = 1;
                      break;
            
		  	case 1020: 
        	       printf("\n Qual o preco dos Servicos: ");
        	       scanf("%f", &preco);
        	       imposto = preco * 0.18;
         	       printf("\n O imposto para os Servicos = %.2f e o valor a ser pago = %.2f", imposto, preco + imposto);
         	       i = 1;
                      break;
            
		   case 1030: 
        	      printf("\n Qual o preco dos demais produtos: ");
        	      scanf("%f", &preco);
        	      imposto = preco * 0.12;
         	      printf("\n O imposto para os demais produtos = %.2f e o valor a ser pago = %.2f", imposto, preco + imposto);
         	      i = 1;
                     break;
         	      
         	default: 
				  printf("\nOpcao Invalida\n");  
                  i = 0; 
        }
        
    }while(i == 0);
    
        return 0;
        system("pause");
    }
