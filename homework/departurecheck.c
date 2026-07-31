#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    // 1. Inisialisasi Array Data Penerbangan (dalam menit sejak tengah malam)
    // Jadwal Keberangkatan: 8:00a, 9:43a, 11:19a, 12:47p, 2:00p, 3:45p, 7:00p, 9:45p
    int departures[] = {480, 583, 679, 767, 840, 945, 1140, 1305};
    
    // Jadwal Kedatangan: 10:16a, 11:52a, 1:31p, 3:00p, 4:08p, 5:55p, 9:20p, 11:58p
    int arrivals[] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    
    // Menghitung jumlah elemen array (banyaknya penerbangan)
    int num_flights = sizeof(departures) / sizeof(departures[0]);

    int user_hour, user_minute, user_time;

    // 2. Meminta Input Pengguna
    printf("Masukkan waktu keberangkatan (format 24-jam, contoh 13:15): ");
    scanf("%d:%d", &user_hour, &user_minute);

    // Mengkonversi input pengguna ke menit sejak tengah malam
    user_time = (user_hour * 60) + user_minute;

    // 3. Logika Pencarian Waktu Terdekat
    int closest_index = 0; // Asumsikan indeks ke-0 adalah yang terdekat untuk langkah awal
    int min_diff = abs(user_time - departures[0]); 

    // Loop untuk membandingkan input dengan seluruh isi array
    for (int i = 1; i < num_flights; i++) 
    {
        int current_diff = abs(user_time - departures[i]); // Hitung selisih absolut
        
        // Jika selisih saat ini lebih kecil dari selisih terkecil yang pernah ditemukan
        if (current_diff < min_diff) 
        {
            min_diff = current_diff; // Perbarui nilai selisih terkecil
            closest_index = i;       // Simpan indeks jadwal yang paling cocok
        }
    }

    // 4. Mempersiapkan Output (Mengkonversi kembali ke jam dan menit untuk ditampilkan)
    int dep_time = departures[closest_index];
    int arr_time = arrivals[closest_index];

    // Konversi Keberangkatan (Departure) ke format 12-jam
    int dep_h = dep_time / 60;
    int dep_m = dep_time % 60;
    char dep_ampm = (dep_h >= 12) ? 'p' : 'a';
    if (dep_h > 12) dep_h -= 12;
    if (dep_h == 0) dep_h = 12;

    // Konversi Kedatangan (Arrival) ke format 12-jam
    int arr_h = arr_time / 60;
    int arr_m = arr_time % 60;
    char arr_ampm = (arr_h >= 12) ? 'p' : 'a';
    if (arr_h > 12) arr_h -= 12;
    if (arr_h == 0) arr_h = 12;

    // 5. Cetak Hasil
    printf("Waktu keberangkatan terdekat adalah %d:%02d %c.m., tiba pada %d:%02d %c.m.\n",
           dep_h, dep_m, dep_ampm, arr_h, arr_m, arr_ampm);

    return 0;
}