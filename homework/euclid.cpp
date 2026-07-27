#include <stdio.h>

int main() {
    int a, b, r, gcd;

    scanf("%d %d", &a, &b);
    while (b != 0) {
        r = a % b;  // Menghitung sisa bagi
        
        a = b;      // Geser nilai a menjadi b
        b = r;      // Geser nilai b menjadi sisa bagi
    }
    
    // Nilai a saat ini adalah hasil GCD-nya
    gcd = a;

    printf("%d", gcd);
    
    return 0;
}