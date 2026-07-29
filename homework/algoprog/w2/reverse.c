#include <stdio.h>

int main() {
    int A, B, posisi;
    scanf("%d %d", &A, &B);

    int *ptrA = &A;
    int *ptrB = &B;
    
    posisi = *ptrA;
    *ptrA = *ptrB;
    *ptrB = posisi;
    printf("A=%d B=%d",A, B);
    return 0;
}