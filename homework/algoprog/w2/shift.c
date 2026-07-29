#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    printf("Kali 2: %d\n", N<<1);
    printf("Kali 4: %d\n", N<<2);
    printf("Bagi 2: %d\n", N>>1);
    return 0;
}