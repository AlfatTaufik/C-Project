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
    printf("digit : ");
    for(int i = 0; i < 10; i++){
        printf("%3d", i);
    }
    printf("\n");
    printf("Occurencies : ");
    for(int i = 0; i < 10; i++){
        // printf("digit : ");
        // printf("\n");
        printf(" %3d", digit_count[i]);
        if(digit_count[i] > 1){
        }
    
    }
    // printf("\n");
    return 0;
}