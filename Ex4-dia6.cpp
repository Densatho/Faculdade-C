#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(int argc, char*argv[]){
    system("color 0a");
	setlocale(LC_CTYPE, "ptb");
	int vet1[5], vet2[5], vetr[5], i, j, ka=0, kp=0;
	for(i=0; i<5; i++){
		printf("O vet1 numero do %d é de: ", i+1); 
		scanf("%d", &vet1[i]);
	}
	for(i=0; i<5; i++){
		printf("O vet2 numero do %d é de: ", i+1); 
		scanf("%d", &vet2[i]);
	}
	for(j=0; j<5; j++){
		for(i=0; i<5; i++){
			if(vet1[j] == vet2[i]){
				vetr[j] = vet1[j];
				ka++;
			}
		}
		if(ka != kp){
			kp++;
			ka = kp;
			}
		}
	if(kp>0){
		printf("Os valores em comuns são ");
		for(i=0; i<kp; i++){
			printf("%d ", vetr[i]); 
		}
		printf("\n");
	}else{
		printf("Não existe numeros em comum\n");
	}
	system("pause");
}

