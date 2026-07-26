#include <stdio.h>

int main() {
    float income, tax, remainder;
    printf("Enter your income: ");
    scanf("%f", &income);
    if(income <= 750){
        tax = 0.01 * income;
    } else if (income > 750 && income < 2250){
    	remainder = (income - 750) * 0.02;
    	tax  = 7.50 + remainder;
	} else if (income > 2250 && income < 3750 ){
    	remainder = (income - 2250) * 0.3;
    	tax  = 37.50 + remainder;
	} else if (income > 3750 && income < 5250){
    	remainder = (income - 3750) * 0.04;
    	tax  = 82.50 + remainder;
    } else if (income > 5250 && income < 7000){
    	remainder = (income - 5250) * 0.05;
    	tax  = 142.50 + remainder;
    } else if (income > 7000){
    	remainder = (income - 7000) * 0.06;
    	tax  = 230.00 + remainder;
    }
    printf("your tax is %.2f", tax);

    return 0;
}
