#include <stdio.h>

int main(){
	int n, r;
	n = 0; r = 0;
	while(1){
		n++;
		printf("%5d\n", n * n);
		r++;
		if(r % 24 == 0){
			printf("Press enter to continue : ");
			while(getchar() != '\n'){
				
			}
		}		
	}
	
	
	return 0;
}
