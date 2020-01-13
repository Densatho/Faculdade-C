#include <stdio.h>
#include <locale.h>

int i;

int main(){
setlocale(LC_CTYPE, "ptb");
for(i=4; i<200; i+=4){
 		printf("%d ", i); 	
}

 	
}
