#include <stdio.h>

int main() {
    long long number;

    scanf("%lld", &number);
    if(number >= 0 && number <= 9){
        printf("Number %lld has 1 digit\n", number);
    } else if(number >= 10 && number <= 99){
        printf("Number %lld has 2 digits\n", number);
    } else if(number >= 100 && number <= 999){
        printf("Number %lld has 3 digits\n", number);
    } else if(number >= 1000 && number <= 9999){
        printf("Number %lld has 4 digits\n", number);
    } else if(number >= 10000 && number <= 99999){
        printf("Number %lld has 5 digits\n", number);
    } else if(number >= 100000 && number <= 999999){
        printf("Number %lld has 6 digits\n", number);
    } else if(number >= 1000000 && number <= 9999999){
        printf("Number %lld has 7 digits\n", number);
    } else if(number >= 10000000 && number <= 99999999){
        printf("Number %lld has 8 digits\n", number);
    } else if(number >= 100000000 && number <= 999999999){
        printf("Number %lld has 9 digits\n", number);
    } else {
        printf("Number %lld has more than 9 digits\n", number);
    }

    return 0;
}