#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


float Taxa(float x, float y, int z){
	return x + ( x * (y/100.0)*z);
}


int main(){
	system("Color 0A");
	int tempo;
	float valor, taxa, Pres;
	scanf("%f %f %d", &valor, &taxa, &tempo);
	Pres = Taxa(valor, taxa, tempo);
	printf("%.2f\n", Pres);
	system("Pause");
}
