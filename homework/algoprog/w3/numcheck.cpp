#include <stdio.h>

int main(){
	int n, m;
	int gnp, gnj;
	gnp = 0;
	gnj = 0;
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		scanf("%d", &m);
	
		if(m % 2 == 0){
			gnp++;
		}
		else {
			gnj++;
		}
	}
	
	printf("Genap: %d\n", gnp);
	printf("Ganjil: %d\n", gnj);
	return 0;
}
