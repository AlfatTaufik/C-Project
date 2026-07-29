#include <stdio.h>

int main(){
	int N;
	N = 0; // menghindari nilai garbage
	scanf("%d", &N);
	
	printf("%d\n", N += 10);
	printf("%d\n", N *= 3);
	printf("%d\n", N -= 5);
	return 0;
}  
