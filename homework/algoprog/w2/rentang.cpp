#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%s", N > 0 && N <= 101 ? "Ya" : "Tidak");
    return 0;
}