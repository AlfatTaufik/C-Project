// Input : Nama, Umur
// Output : my name is {nama}, umur {umur}, lahir di tahun {tahun};

#include <stdio.h>

int main(){
	int umur, tahun;
	char nama[100];
	tahun = 2006;
	scanf("%d %[^\n]", &umur, &nama); 
//	scanf("%d", &umur);
	printf("My name is %s, umur %d, lahir di tahun %d.", nama, umur, tahun);  
	return 0;
}
