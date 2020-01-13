#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
	system("color 0A");
	setlocale(LC_CTYPE, "ptb");
	int a[10], b[10], i;
	
	for(i=0; i<10; i++){
		printf("valor do A numero %d é de ", i+1);
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	
	for(i=0; i<10; i++){
		printf("A=%d \nB=%d \n", a[i], b[i]);
	}
	system("Pause");
}
