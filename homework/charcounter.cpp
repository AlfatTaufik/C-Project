#include <stdio.h>

int main()
{
    int word, letter;
    char ch;
    letter = 0;
    word = 1;
    while ((ch = getchar()) != '\n')
    {
        if(ch  == ' '){
            word++;
        } else{
            letter++;
        }
    }

    printf("jumlah : %.1f\n", (double)letter/word);
    return 0;
} 