#include <stdio.h>

int main(void) {
    int a1, a2, a3, a4,
        b1, b2, b3, b4,
        c1, c2, c3, c4,
        d1, d2, d3, d4;
    printf("Enter the number 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
        &a1, &a2, &a3, &a4, &b1, &b2, &b3, &b4, &c1, &c2, &c3, &c4, &d1, &d2, &d3, &d4);
    printf("Order :\n");
    printf("%d %d %d %d\n", a1, a2, a3, a4);
    printf("%d %d %d %d\n", b1, b2, b3, b4);
    printf("%d %d %d %d\n", c1, c2, c3, c4);
    printf("%d %d %d %d\n", d1, d2, d3, d4);
    printf("Sum of rows :\n");
    printf("%d %d %d %d\n", a1 + a2 + a3 + a4, b1 + b2 + b3 + b4, c1 + c2 + c3 + c4, d1 + d2 + d3 + d4);
    printf("Sum of columns :\n");
    printf("%d %d %d %d\n", a1 + b1 + c1 + d1, a2 + b2 + c2 + d2, a3 + b3 + c3 + d3, a4 + b4 + c4 + d4);
    printf("Sum of diagonals :\n");
    printf("%d %d\n", a1 + b2 + c3 + d4, a4 + b3 + c2 + d1);
    return 0;
}