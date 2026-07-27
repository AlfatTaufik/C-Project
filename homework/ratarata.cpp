#include <stdio.h>

int main(){
	int a,b,c;
	float rata;
	scanf("%d %d %d", &a, &b, &c);
	rata = (float)(a + b + c) / 3;
	printf("Rata - rata: %.2f", rata); 
	return 0;
}
