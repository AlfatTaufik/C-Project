#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("Tanpa kurung : %d\n", A + B * C);
    printf("Dengan kurung : %d\n", (A + B) *C);

    return 0; 
}