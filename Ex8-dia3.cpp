#include <stdio.h>
#include <locale.h>

char escolha;

int main(){
setlocale(LC_CTYPE, "ptb");
Start:
printf("====================================================================\nEntre com a op��o desejada: <T>ri�ngulo ou <Q>uadrado ou <P>ir�mide\n====================================================================\n");
scanf("%c", &escolha);
switch (escolha){
	
	case 't':
	case 'T':
		printf("*\n***\n*****\n*******\n*********");
			
		break;
			
	case 'q':
	case 'Q':
		printf("*\n***\n*****\n*******\n*********");
			
		break;
		
	case 'p':
	case 'P':
		printf("    *\n   ***\n  *****\n *******\n*********");
		
		break;
	
	default:
		
		printf("Op��o invalida, tente novamente \n \n");
		goto Start;		
}
}
