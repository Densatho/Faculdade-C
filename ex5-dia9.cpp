#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>


int ex4(int x, int y, int z){
	return pow((x+y+z), 2);
}


int main(){
	system("Color 0A");
	int a, b, c, d;
	scanf("%d %d %d", &a, &b, &c);
	d = ex4(a, b, c);
	printf("%d\n", d);
	system("Pause");
}
