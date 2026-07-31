#include <stdio.h>
#include <ctype.h>

int main() {
	char ch;
	int scrabble_values[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8,  // A B C D E F G H I J
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1, // K L M N O P Q R S T
        1, 4, 4, 8, 4, 10              // U V W X Y Z
    };
	int total_score = 0;

	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			ch = toupper(ch);
			total_score += scrabble_values[ch - 'A'];
		} 
	}

	printf("Your total score is %d\n", total_score);
	return 0;
}