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
    printf("\n");
    printf("Row Average: ");
    for(int i = 0; i < 5; i++){
        printf("%2d ", sum_row[i]);
        printf("%2d ", sum_row[i]/5);
         
    }
    printf("\n");
    printf("Column totals: ");
    printf("\n");
    printf("Column average: ");
    for (int j = 0; j < 5; j++)
    {
        printf("%2d ", sum_cols[j]);
        printf("%2d ", sum_cols[j]/5);
    }

    return 0;
}