#include <stdio.h>
float P1, P2, T1, T2, MD;

int main()
{
start:
printf("Escreva as duas notas de trabalho \n");
scanf("%f", &P1);
scanf("%f", &P2);
printf("Escreva as duas notas de trabalho \n");
scanf("%f", &T1);
scanf("%f", &T2);
MD = (float) (P1*0.8+P2*0.8+T1*0.2+T2*0.2)/2;
MD >= 6 ? printf("Aprovado com nota %.2f \n \n", MD): MD < 4 ? printf("Reprovado com nota %.2f \n \n", MD) : printf("Recuperacao com nota %.2f \n \n", MD) ;
}

