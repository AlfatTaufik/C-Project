#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char maps[10][10];
    int row_now;
    int cols_now;
    // char 'A', 'B', 'C';

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            maps[i][j] = '.';
        }
    }

    srand(time(NULL));
    row_now = rand() % 10;
    cols_now = rand() % 10;
    maps[row_now][cols_now] = 'A';

    for (char letter = 'B'; letter <= 'Z'; letter++)
    {
        int move, next_row, next_cols;
        do
        {
            move = rand() % 4;
            next_row = row_now;
            next_cols = cols_now;
            if(move == 0)next_cols--;
            else if(move == 1)next_row++;
            else if(move == 2)next_row--;
            else if(move == 3)next_cols++;
        } while (next_row < 0 || next_row >= 10 || next_cols < 0 || next_cols >= 10 || maps[next_row][next_cols] != '.' );
        row_now = next_row;
        cols_now = next_cols;
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