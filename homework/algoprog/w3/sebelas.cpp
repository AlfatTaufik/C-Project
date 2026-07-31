#include <stdio.h>

int main() {
    int n, d;
    d = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &n);
        d++;
        if(n % 7 == 0){
            break;
        }
    }

    printf("%d", d);
    return 0;
}