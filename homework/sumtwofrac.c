#include <stdio.h>

int main(void) {
    int num1, num2, denom1, denom2;
    int result_num, result_denom;

    printf("Enter the first fraction (numerator and denominator): ");
    scanf("%d/%d", &num1, &denom1);
    scanf("%d/%d", &num2, &denom2);

    printf("The sum of %d/%d and %d/%d is: ", num1, denom1, num2, denom2);
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf("%d/%d\n", result_num, result_denom);
    return 0;
}