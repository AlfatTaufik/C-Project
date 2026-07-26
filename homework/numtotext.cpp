#include <stdio.h>

int main(){
	int number, comparator1, comparator2;
	
	scanf("%d", &number);
	comparator1 = number / 10; //puluhan
	comparator2 = number % 10; //satuan
	
	if(number > 10 && number < 20){
		switch (number) {
			case 11 :
				printf("Eleven");
				break;
			case 12 : 
				printf("Twelve");
				break;
			case 13 :
				printf("Thirty");
				break;
			case 14 : 
				printf("Fourty");
				break;
			case 15 :
				printf("Fifthy");
				break;
			case 16 :
				printf("Sixty");
				break;
			case 17 :
				printf("Seventy");
				break;
			case 18 :
				printf("Eighty");
				break;
			case 19 :
				printf("Ninety");
				break;
		}
	}
	
	if(number > 19 && number < 100){
		switch (comparator1) {
			case 2 : 
				printf("Twenty-");
				break;
			case 3 :
				printf("Thirty-");
				break;
			case 4 :
				printf("Fourty-");
				break;
			case 5 :
				printf("Fifty-");
				break;
			case 6 :
				printf("Sixty-");
				break;
			case 7 :
				printf("Seventy-");
				break;
			case 8 :
				printf("Eighty-");
				break;
			case 9 :
				printf("Ninety-");
				break;
		}
		
		switch (comparator2) {
			case 1 :
				printf("one");
				break;
			case 2 :
				printf("two");
				break;
			case 3 :
				printf("three");
				break;
			case 4 :
				printf("Four");
				break;
			case 5 :
				printf("Five");
				break;
			case 6 :
				printf("Six");
				break;
			case 7 :
				printf("Seven");
				break;
			case 8 :
				printf("Eight");
				break;
			case 9 :
				printf("Nine");
				break;
		}
	} //2
	return 0;
}
