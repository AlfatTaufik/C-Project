#include <stdio.h>

int main(){
	int angka, digit;
	digit = 1;
	printf("Masukan angka : ");
	scanf("%d", &angka);

	do {
		angka = angka / 10;
		digit++;
	} while (angka != 0);
	printf("Number count : %d\n", digit);
	
	return 0;
}
