#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) {
    float amount, tax, total;
    printf("Enter your amount of money: ");
    scanf("%f", &amount);
    tax = amount * TAX_RATE;
    total = amount + tax;
    printf("The total is $%.2f\n", total);
    return 0;
}