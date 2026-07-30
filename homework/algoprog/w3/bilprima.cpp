#include <stdio.h>
#include <stdbool.h>

int main(){
	int n;
	bool is_prime = true;
	scanf("%d", &n);
	
	if(n <= 1){
		is_prime = false;
	} 
	else {
	for(int i = 2; i * i <= n; i ++){
		if (n % i == 0){
			is_prime = false;
			break;
		}
	}
	}
	printf("%s\n", is_prime ? "Prima" : "Bukan prima");
	return 0;
} 
