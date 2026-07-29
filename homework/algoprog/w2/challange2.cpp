#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    
    if (N > 0 && (N & (N - 1)) == 0) {
        printf("Ya\n");
    } else {
        printf("Tidak\n");
    }
    
    return 0;
}