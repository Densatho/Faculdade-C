#include <stdio.h>
float P1, P2, MD;

int main()
{
start:
printf("Escreva as duas notas \n");
scanf("%f", &P1);
scanf("%f", &P2);
MD = (float) (P1+P2)/2;
MD >= 6 ? printf("Aprovado com nota %.2f \n \n", MD): printf("Reprovado com nota %.2f \n \n", MD);
}

