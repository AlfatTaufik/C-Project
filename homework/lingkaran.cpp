#include <stdio.h>

#define pi 3.14159

int main(){
	float r, k, l;
	scanf("%f", &r);
	k = 2 * pi * r;
	l = pi * (r * r);
	printf("Keliling : %.2f\n", k);
	printf("Luas : %.2f\n", l);
	
	return 0;
}
