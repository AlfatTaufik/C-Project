#include <stdio.h>

int main(){
	int angka, n1, n2, n3, n4, n5;
	printf("Masukan angka 0 - 40000\n");
	scanf("%d", &angka);
	n5 = angka % 8;
	angka /= 8;
	n4 = angka % 8;
	angka /= 8;
	n3 = angka % 8;
	angka /= 8;
	n2 = angka % 8;
	angka /= 8;
	n1 = angka % 8;
	printf("Bilangan anda dalam bentuk octal adalah %d%d%d%d%d", n1,n2,n3,n4,n5);
	
	return 0;
}
