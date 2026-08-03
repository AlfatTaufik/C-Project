#include <stdio.h>
#include <string.h> // Memasukkan library manipulasi string

int main(void)
{
    char sentence[200];
    char *words[50]; // Array of pointer untuk menyimpan alamat masing-masing kata
    int word_count = 0;
    char term_char = '\0';

    printf("Enter a sentence: ");
    // Membaca seluruh baris input dengan aman
    fgets(sentence, sizeof(sentence), stdin); 

    // 1. Cari tanda baca akhir dan hapus dari kalimat utama
    int len = strlen(sentence);
    for (int i = 0; i < len; i++) {
        if (sentence[i] == '.' || sentence[i] == '?' || sentence[i] == '!') {
            term_char = sentence[i];
            sentence[i] = '\0'; // Memotong string tepat di tanda baca
            break;
        }
        if (sentence[i] == '\n') {
            sentence[i] = '\0'; // Membersihkan sisa 'Enter' dari fungsi fgets
        }
    }

    // 2. Pecah kalimat menjadi kata-kata menggunakan strtok()
    char *token = strtok(sentence, " "); // Pisahkan berdasarkan spasi (" ")
    
    while (token != NULL) {
        words[word_count] = token; // Simpan kata yang ditemukan ke dalam array
        word_count++;
        token = strtok(NULL, " "); // Lanjut cari kata berikutnya
    }

    // 3. Cetak array kata secara mundur
    printf("Reversal of sentence: ");
    for (int i = word_count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) {
            printf(" "); // Cetak spasi antar kata
        }
    }

    // 4. Cetak tanda baca akhir
    if (term_char != '\0') {
        printf("%c", term_char);
    }
    printf("\n");

    return 0;
}