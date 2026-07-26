#include <stdio.h>

int main() {
    int income, tax;
    printf("Enter your income: ");
    scanf("%d", &income);
    if(income < 750){
        tax = 0.01 * income;
    } else if (income > 750 && income < 2250)

    return 0;
}