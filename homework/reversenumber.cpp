#include <stdio.h>

int main(){
	int angka, satuan, puluhan, ratusan;
	
	printf("Masukan angka puluhan 10 - 99 : ");
	scanf("%d", &angka);
	satuan = angka / 100;
	puluhan = angka % 100;
	ratusan = puluhan % 10;
	puluhan /= 10;
	printf("Reverse of your number is %d%d%d\n", ratusan, puluhan, satuan);
	
	return 0;
}
