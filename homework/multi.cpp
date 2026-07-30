#include <stdio.h>

int main() {
    int array_num[5][5];
    int sum_row[5] = {0};
    int sum_cols[5] = {0};

    for(int i = 0; i < 5; i++){
        printf("Enter row %d:", i + 1);
        for(int j = 0; j < 5; j++){
            scanf("%d", &array_num[i][j]);
            sum_row[i] += array_num[i][j];
            sum_cols[j] += array_num[i][j];
        }
    }

    printf("Row totals: ");
    for(int i = 0; i < 5; i++){
        printf("%2d ", sum_row[i]);
    }
    printf("\n");
    printf("Column totals: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%2d ", sum_cols[j]);
    }

    return 0;
}