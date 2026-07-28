#include <stdio.h>

int main(){
	double value, bucket;
	value;
	scanf("%lf", &value);
	bucket = 0.0f;
	
	while(value != 0){
		bucket += value;
		printf("Current value is : %.3lf\n", bucket);
		scanf("%lf", &value);
		
		if(value == 0){
			break;
		}
	}
	printf("Final value is : %.3lf\n", bucket);
	
	
	return 0;
}
