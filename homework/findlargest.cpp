#include <stdio.h>

int main() {
    float n, largest;
    
    // 1. Minta input pertama sebelum masuk loop (Priming Read)
    scanf("%f", &n);
    
    // Jadikan input asli pertama dari user sebagai nilai terbesar sementara
    largest = n; 
    
    // 2. Loop hanya akan berjalan selama input masih valid (> 0)
    while (n > 0) {
        
        // Cek apakah angka saat ini lebih besar
        if (n > largest) {
            largest = n;
        }
        
        // 3. Minta input selanjutnya di baris paling akhir loop
        scanf("%f", &n);
    }
    
    // Mencetak hasil akhir
    printf("The largest number entered was : %f\n", largest);
    
    return 0;
}