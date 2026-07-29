#include <stdio.h>

int main(){
	int A, B;
	scanf("%d %d", &A, &B);
	
	if(B != 0){
		printf("Jumlah: %d\n", A+B);
		printf("Selisih: %d\n", A-B);
		printf("Kali: %d\n", A*B);
		printf("Bagi: %d\n", A/B);
		printf("Sisa: %d\n", A%B);
	} else {
		printf("B tidak boleh 0\n");
	}
	
	return 0;
}
