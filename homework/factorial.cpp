#include <stdio.h>

int main() {
    int x;
    short temp;
    temp = 1;

    printf("Enter a positive integer : ");
    scanf("%d", &x);
    for(int i = 2; i <= x; i++){
        temp *= i;
    }
    printf("Factorial of %d: %d", x, temp);
    
    return 0;
}