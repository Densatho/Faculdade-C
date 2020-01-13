#include <stdio.h>
float n1, n2, n3, n4, media;

int main()
{
start:
printf("Insira as notas \n");
scanf("%f", &n1);
scanf("%f", &n2);
scanf("%f", &n3);
scanf("%f", &n4);
media = (n1 + n2 + n3 + n4)/4;
if(media >= 6){
	printf("Aprovado com nota %.2f \n \n", media);
}
	else{
		printf("Reprovado com nota %.2f \n \n", media);
		}
	goto start;

}

