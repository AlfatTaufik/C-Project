#include <stdio.h>

int main(){
	int fibo[41] = {0, 1}; 
	for(int i = 2; i < (sizeof(fibo) / sizeof(fibo[0])); i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2]; 
	}  
	printf("Jumlahnya %d", fibo[40]);
	return 0;
}
