#include <stdio.h>

int main(void) {
    float x;
    printf("Enter a floating-point number: ");
    scanf("%f", &x);
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%-6d\n", (int)x);
    return 0;
}