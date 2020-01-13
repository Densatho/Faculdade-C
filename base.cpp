#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


Eng(){
	
	
	
	
}

Ptb(){
	setlocale(LC_CTYPE, "ptb");



}

JP(){
	setlocale(LC_CTYPE, "Japanese");
	
	
	
	
}



int main(int argc, char*argv[]){
	system("Color 0A");
	char language;
	Inicio:
	printf("Select your language, <E>nglish <P>ortuguese <J>apanese\n");
	scanf("%c", &language);
	switch (language){
		case 'E':
		case 'e':
			Eng();
		break;
		
		case 'P':
		case 'p':
			Ptb();
		break;
		
		case 'J':
		case 'j':
			JP();
		break;
		
		default:
			printf("This option doesn't exist!");
			goto Inicio;
	}

	
	
	
	
	system("pause");
}

