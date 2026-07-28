#include <stdio.h>

int main(){
	int i, d, m, y, min_d, min_m, min_y;
	printf("Enter a date (mm/dd/yy) : ");
	scanf("%d/%d/%d", &m, &d, &y);
	
	if(d == 0 && m == 0 && y == 0){
			return 0 ;
		}
	
	min_d = d;
	min_m = m;
	min_y = y;
	
	while(1){
	
		printf("Enter a date (mm/dd/yy) : ");
		scanf("%d/%d/%d", &m, &d, &y);
		
		if(d == 0 && m == 0 && y == 0){
			break;
		}
		
		if(y < min_y){
			min_y = y; min_m = m; min_d = d;
		} else if(y == min_y && m < min_m) {
			min_y = y; min_m = m; min_d = d;
		}
		 else if( y == min_y && min_m == m && min_d == d){
			min_y = y; min_m = m; min_d = d;
		}
	}
	
	printf("%d/%d/%d is the earliest date", min_m, min_d, min_y); 
	
	
	return 0;
}
