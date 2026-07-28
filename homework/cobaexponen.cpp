#include <stdio.h>

int main(){
	int n, exp;
	scanf("%d", &n);
	exp = n * n;
	while(exp % 24 != 0){
		printf("%8d", exp);
	} 
	
	return 0;
} 
