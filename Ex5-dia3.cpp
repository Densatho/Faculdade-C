#include <stdio.h>
#include <locale.h>

int i;

int main(){
setlocale(LC_CTYPE, "ptb");
for(i=1; i<=20; i+=2){
 		printf("%d ", i); 	
}

 	
}
