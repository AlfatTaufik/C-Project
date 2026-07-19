#include <stdio.h>

int main(void) {
    // float amount, rate, monthly_payment, total_payment, rest_amount;
    // printf("Enter the loan amount: ");
    // scanf("%f", &amount);  
    // printf("Enter the annual interest rate in range 0-100 : ");
    // scanf("%f", &rate);
    // rate = ( rate / 100 ) / 12; // Convert annual rate to monthly rate
    // printf("Enter the number of your monthly payments: \n");
    // scanf("%f", &monthly_payment);

    // float f_month, s_month, t_month;
    // rest_amount = amount + (amount * rate);
    // f_month = amount - rest_amount;
    // printf("Balance remaining after first month: %.2f\n", f_month);

    float loan, rate, amount;
    float monthly_rate, balance;

    printf("Enter the loan amount: ");
    scanf("%f", &loan);
    printf("Enter the annual interest rate in range 0-100: ");  
    scanf("%f", &rate);
    rate = (rate / 100) / 12; // Convert annual rate to monthly rate
    printf("Enter the number of your monthly payments: ");
    scanf("%f", &amount);

    balance = loan + (loan * rate) - amount;
    printf("Balance remaining after first month: %.2f\n", balance);
    balance = balance + (balance * rate) - amount;
    printf("Balance remaining after second month: %.2f\n", balance);
    balance = balance + (balance * rate) - amount;
    printf("Balance remaining after third month: %.2f\n", balance);
}