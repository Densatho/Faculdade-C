#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


void Fibonacci(int x){
	int r[x];
	r[0] = 1;
	r[1] = 1;
	printf("1 1 ");
	for(int i = 2; i < x; i++){
		r[i] = r[i-2] + r[i-1];
		printf("%d ", r[i]);
	}
		printf("\n");
}


int main(){
	system("Color 0A");
	int n;
	scanf("%d", &n);
	Fibonacci(n);
	system("Pause");
}
