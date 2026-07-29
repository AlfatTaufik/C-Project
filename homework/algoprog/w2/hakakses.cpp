#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    printf("Gabungan : %d\n", A|B);
    printf("Bersama : %d\n", A&B);
    printf("Berbeda : %d\n", A^B);
    return 0;
}