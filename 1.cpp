#include <stdio.h>
int A, B, R1, R2;


int main()
{
A = 0;
B = 0;
R1= 0;
R2= 0;
start:
scanf("%d", &A);
scanf("%d", &B);
R1 = A + B;
R2 = A - B;
printf("Resultado da soma %d e resultado da subtracao %d \n", R1, R2);
goto start;

}

