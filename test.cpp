#include <stdio.h>
int a, b = 19, r = 10;

int main()
{
start:
scanf("%d", &a);
a >= 10 ? printf("e maior que 10 \n") : printf("nao e maior que 10 \n");
a % 2 == 0 ? printf("e par \n") : printf("e impar \n");
r = a % 7 == 0 ? 3: 5;
printf("%d \n", r);
	goto start;

}

