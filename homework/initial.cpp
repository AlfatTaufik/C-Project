#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    char last_name[20];
    int i = 0;
    // char last[] = " ";
    char initial;

    while((ch = getchar()) == ' '){

    }
    // putchar(ch);
    last_name[0] = ch;
    while((ch = getchar()) != ' '){

    }
    
    while((ch = getchar()) == ' '){
        
    }

    putchar(ch);
    while((ch = getchar()) != ' ' && ch != '\n' && i < ){
        putchar(ch);
    }
    printf(", %c.", toupper(initial));
    return 0;
}