#include <stdio.h>

int main() {
    int n, coin;
    scanf("%d", &n);
    coin = 0;
    
    for(int i = 0; i <= n; i++){
        coin += i;
    }
    printf("%d", coin);
    return 0;
}