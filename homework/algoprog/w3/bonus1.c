#include <stdio.h>

int main() {
    int a, b;
    int satuan, ratusan, puluhan, total;
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b;i++){
        satuan = i % 10;
        puluhan = (i / 10) % 10; //120 / 10 = 1 % 10 = 2
        ratusan = i / 100;

        total = (satuan * satuan * satuan) + (puluhan * puluhan * puluhan) + (ratusan * ratusan * ratusan);
        if(total == i){
            printf("%d\n", i);
        }
    }
    return 0;
}