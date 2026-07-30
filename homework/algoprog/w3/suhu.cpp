#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 0){
        printf("Beku\n");
    } else if (n >= 0 && n <= 100){
        printf("Cair\n");
    } else if (n > 100){
        printf("Uap\n");
    }
    return 0;
} 