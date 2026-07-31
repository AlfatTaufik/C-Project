#include <stdio.h>

int main() {
    int n, temp;
    temp = 1;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++){
        temp *= i;
    }

    printf("%d", temp);
    return 0;
}