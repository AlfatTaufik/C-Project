#include <stdio.h>

int main() {
    int digit_count[10] = {0};
    long long int n;
    int digit;

    printf("Enter a number : ");
    scanf("%lld", &n);

    while(n > 0){
        digit = n % 10;
        digit_count[digit]++;
        digit = n /= 10;
    }
    printf("Repeated digit : ");
    for(int i = 0; i < 10;i++){
        if(digit_count[i] > 1){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}