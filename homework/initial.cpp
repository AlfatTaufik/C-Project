#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    // char last[] = " ";
    char initial;

    while((ch = getchar()) == ' '){

    }
    // putchar(ch);
    initial = ch;
    while((ch = getchar()) != ' '){

    }
    
    while((ch = getchar()) == ' '){
        
    }

    putchar(ch);
    while((ch = getchar()) != ' ' && ch != '\n'){
        putchar(ch);
    }
    printf(", %c.", toupper(initial));
    return 0;
}