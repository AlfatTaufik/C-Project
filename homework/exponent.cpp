#include <stdio.h>

int main(){
	int n, i;
	float e, e2;
	scanf("%d", &n);
	e = 1.0;
	e2 = 1.0;
	
	for(i = 1; i <= n; i++){
		e2 = e2 * i;
		e = e + (1.0 / e2);
	} 
	
	printf("Nilainya hampir %f", e); 
	
	return 0;
}
