#include <stdio.h>

int main(){
	int i, sum;
	sum = 0;
	scanf("%d", &i);
	
	while (i != 0){
		sum += i;
		scanf("%d", &i);
	}
	
	printf("%d", sum);
	return 0;
}
