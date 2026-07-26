#include <stdio.h>

// 1. Membuat function hitung() dan memindahkan semua logika ke sini
// Kita menggunakan 'void' karena fungsi ini hanya mengeksekusi perintah tanpa mengembalikan nilai (return) ke pemanggilnya
void hitung() {
    int shares;
    float price_per_share, trade_value;
    float original_commission, rival_commission;

    // Meminta input jumlah lot/lembar dan harga saham (misal simulasi transaksi BBCA)
    printf("Enter number of shares: ");
    scanf("%d", &shares);
    
    printf("Enter price per share: ");
    scanf("%f", &price_per_share);

    // Menghitung total nilai transaksi (Bagian a)
    trade_value = shares * price_per_share;

    // ---------------------------------------------------------
    // Logika Original Broker (Berdasarkan Buku Section 5.2)
    // ---------------------------------------------------------
    if (trade_value < 2500.00f) {
        original_commission = 30.00f + (0.017f * trade_value);
    } else if (trade_value < 6250.00f) {
        original_commission = 56.00f + (0.0066f * trade_value);
    } else if (trade_value < 20000.00f) {
        original_commission = 76.00f + (0.0034f * trade_value);
    } else if (trade_value < 50000.00f) {
        original_commission = 100.00f + (0.0022f * trade_value);
    } else if (trade_value < 500000.00f) {
        original_commission = 155.00f + (0.0011f * trade_value);
    } else {
        original_commission = 255.00f + (0.0009f * trade_value);
    }

    // Aturan minimum charge $39 untuk original broker
    if (original_commission < 39.00f) {
        original_commission = 39.00f;
    }

    // ---------------------------------------------------------
    // Logika Rival Broker (Bagian b)
    // ---------------------------------------------------------
    if (shares < 2000) {
        rival_commission = 33.00f + (0.03f * shares);
    } else {
        rival_commission = 33.00f + (0.02f * shares);
    }

    // Menampilkan komparasi akhir
    printf("\n--- Transaction Summary ---\n");
    printf("Total trade value: $%.2f\n", trade_value);
    printf("Original Broker Commission: $%.2f\n", original_commission);
    printf("Rival Broker Commission: $%.2f\n", rival_commission);
}

// Function tambahan Anda tetap dibiarkan di luar
int nama() {
    printf("Nama: John Doe\n");
    return 0;
}

// 2. Membuat function main() baru sebagai Entry Point program
int main() {
    // Fungsi main sekarang bertindak sebagai 'manajer' yang memanggil fungsi lain
    // Jika Anda ingin mengeksekusi function nama(), Anda juga bisa memanggilnya di sini
    
    hitung(); // Mengeksekusi seluruh blok kode di dalam function hitung()
    
    return 0;
}
