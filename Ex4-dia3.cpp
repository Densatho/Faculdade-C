#include <stdio.h>
#include <locale.h>

int n;

int main(){
setlocale(LC_CTYPE, "ptb");
printf("Digite um numero entre 0 e 4: ");
scanf("%d", &n);
switch (n) {
	case 1:
		printf("Voc� digitou o numero 1.");
		break;
	case 2:
		printf("Voc� digitou o numero 2..");
		break;
	case 3:
		printf("Voc� digitou o numero 3...");
		break;
	case 4:
		printf("Voc� digitou o numero 4....");
		break;
	default:
		printf("Voc� digitou um numero qualquer");
}

}
