#include <stdio.h>

int main(){
	char ch;
	printf("Enter phone number : ");
	while((ch = getchar()) != '\n'){
		switch (ch) {
			case 'A' ... 'C' :
				putchar('2');
				break;
			case 'D' ... 'F' :
				putchar('3');
				break;
			case 'G' ... 'I' :
				putchar('4');
				break;
			case 'J' ... 'L' :
				putchar('5');
				break;
			case 'M' ... 'O' :
				putchar('6');
				break;
			case 'P' ... 'S' :
				putchar('7');
				break;
			case 'T' ... 'V' :
				putchar('8');
				break;
			case 'W' ... 'Y' :
				putchar('9');
				break;
			default :
				putchar(ch);
				break;
		}
	}
	
	printf("\n");
	
	return 0;
}
