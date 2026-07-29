#include <stdio.h>

int main(){
	int N, sisa;
	
	scanf("%d", &N);
	sisa = N % 10; 
	
	printf("Sisa: %d\n", sisa);
	printf("Dibulatkan: %d\n", N - sisa);
	return 0;
}
