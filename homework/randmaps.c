#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char maps[10][10];
    // char 'A', 'B', 'C';

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            maps[i][j] = '.';
        }
    }

    srand(time(NULL));

    for (char letter = 'A'; letter <= 'Z'; letter++)
    {
        int row_now;
        int cols_now;
        do
        {
            row_now = rand() % 10;
            cols_now = rand() % 10;
        } while (maps[row_now][cols_now] != '.');
        maps[row_now][cols_now] = letter;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", maps[i][j]);
        }
        printf("\n");
    }

    return 0;
}