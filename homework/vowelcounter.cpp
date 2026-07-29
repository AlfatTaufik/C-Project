#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    int vowels;
    vowels = 0;

    while((ch = getchar()) != '\n'){
        switch (tolower(ch)){
            case 'a' : case 'i' : case 'u' : case 'e' : case 'o' :
                vowels++;
                break;
            default :
                break;
        }
    }
    printf("Your sentence contain %d vowels.", vowels);
    return 0;
}