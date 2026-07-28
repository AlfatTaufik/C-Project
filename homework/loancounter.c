#include <stdio.h>

int main(void) {
    float loan, rate, amount;
    float monthly_rate, balance;

    printf("Enter the annual interest rate in range 0-100: ");  
    scanf("%f", &rate);
    rate = (rate / 100) / 12; // Convert annual rate to monthly rate
    printf("Enter the loan amount: ");
	scanf("%f", &loan);
    balance += loan;
    
    while(balance != 0){
	    printf("Enter the number of your monthly payments: ");
	    scanf("%f", &amount);
	    balance = balance + (balance * rate) - amount;
		printf("Your balance now : %.2f\n", balance);
	}
//    balance = loan + (loan * rate) - amount;
//    printf("Balance remaining after first month: %.2f\n", balance);
//    balance = balance + (balance * rate) - amount;
//    printf("Balance remaining after second month: %.2f\n", balance);
//    balance = balance + (balance * rate) - amount;
//    printf("Balance remaining after third month: %.2f\n", balance);
}
