#include <stdio.h>

int main(){
	int i, start, n, now;
	
	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat) : ");
	scanf("%d", &start);

	for(i = 0; i < (start - 1); i++){
		printf("   ");
	}
	for(i = 1; i < n; i++){
		printf("%3d", i);
		
		now = (start - 1) + i;
		if(now % 7 == 0){
		printf("\n");
	}
		
	}
	
	
	
	return 0;
}
