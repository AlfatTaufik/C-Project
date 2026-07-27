#include <stdio.h>

int main() {
    int a, b, gcd, r, p, q;
    scanf("%d/%d", &a, &b);
    p = a, q = b;
    while(b != 0){
        r = a % b;

        a = b;
        b = r;
    }
    gcd = a;
    printf("In lowest terms : %d/%d", p/gcd, q/gcd);


    return 0;
}