#include <stdio.h>

int main(){
	int nilai, comparator;
	scanf("%d", &nilai);
	
	comparator = nilai / 10;
	printf("Your Grade is : ");
	if(nilai >= 0 && nilai <= 100){
		switch (comparator) {
			case 10 :
				printf("A");
				break;
			case 9 :
				printf("A");
				break;
			case 8 :
				printf("B");
				break;
			case 7 :
				printf("C");
				break;
			case 6 :
				printf("D");
				break;
			default :
				printf("F");
				break;
		}
	} else {
		printf("Its not correct\n");
	}
			
	return 0;
}
