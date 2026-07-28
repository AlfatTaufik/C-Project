#include <stdio.h>

int main(){
	int n, m;
	scanf("%d", &n);
	while(m % 24 != 0){
		printf("%10d", n * n);
		m = n;
	}
	
	return 0;
}
